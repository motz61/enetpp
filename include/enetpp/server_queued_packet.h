#ifndef ENETPP_SERVER_QUEUED_PACKET_H_
#define ENETPP_SERVER_QUEUED_PACKET_H_

#include "enet/enet.h"

namespace enetpp {

	class server_queued_packet {
	private:
		enet_uint8 _channel_id;
		ENetPacket* _packet;
		uint32_t _client_id;

	public:
		server_queued_packet()
			: _channel_id(0)
			, _packet(nullptr) 
			, _client_id(0) {
		}

		server_queued_packet(enet_uint8 channel_id, ENetPacket* packet, uint32_t client_id)
			: _channel_id(channel_id)
			, _packet(packet) 
			, _client_id(client_id) {
		}

		auto get_channel_id() const {
			return _channel_id;
		}

		auto get_packet() const {
			return _packet;
		}

		auto get_client_id() const {
			return _client_id;
		}
	};

}

#endif
