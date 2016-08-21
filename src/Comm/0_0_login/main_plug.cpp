#include "Sharun.hpp"

void* C_HARDWARE_INFO_f(player*, packet*);
void* C_REQUEST_VIP_SYSTEM_INFO_f(player*, packet*);
void* C_LOGIN_ARBITER_f(player*, packet*);

void* S_WAITING_LIST_f(const void**);
void* S_SEND_VIP_SYSTEM_INFO_f(const void**);
void* S_LOGIN_ARBITER_f(const void**);
void* S_LOGIN_ACCOUNT_INFO_f(const void**);
void* S_ACCOUNT_PACKAGE_LIST_f(const void**);
void* S_UPDATE_CONTENTS_ON_OFF_f(const void**);
void* S_ACCOUNT_BENEFIT_LIST_f(const void**);
void* S_CONFIRM_INVITE_CODE_BUTTON_f(const void**);
void* S_REMAIN_PLAY_TIME_f(const void**);
void* S_LOADING_SCREEN_CONTROL_INFO_f(const void**);

plugin_t Plugin = {
	.handle = NULL,
	.init = NULL,
	.uninit = NULL,
	.recv = (plugin_opcode_t[]){
		{ C_HARDWARE_INFO, "C_HARDWARE_INFO", (void*(*)(const void**)) C_HARDWARE_INFO_f },
		{ C_REQUEST_VIP_SYSTEM_INFO, "C_REQUEST_VIP_SYSTEM_INFO", (void*(*)(const void**)) C_REQUEST_VIP_SYSTEM_INFO_f },
		{ C_LOGIN_ARBITER, "C_LOGIN_ARBITER", (void*(*)(const void**)) C_LOGIN_ARBITER_f },

		{ OPC_MAX, NULL, NULL }
	},
	.send = (plugin_opcode_t[]){
		{ S_WAITING_LIST, "S_WAITING_LIST", S_WAITING_LIST_f },
		{ S_SEND_VIP_SYSTEM_INFO, "S_SEND_VIP_SYSTEM_INFO", S_SEND_VIP_SYSTEM_INFO_f },
		{ S_LOGIN_ARBITER, "S_LOGIN_ARBITER", S_LOGIN_ARBITER_f },
		{ S_LOGIN_ACCOUNT_INFO, "S_LOGIN_ACCOUNT_INFO", S_LOGIN_ACCOUNT_INFO_f },
		{ S_ACCOUNT_PACKAGE_LIST, "S_ACCOUNT_PACKAGE_LIST", S_ACCOUNT_PACKAGE_LIST_f },
		{ S_UPDATE_CONTENTS_ON_OFF, "S_UPDATE_CONTENTS_ON_OFF", S_UPDATE_CONTENTS_ON_OFF_f },
		{ S_ACCOUNT_BENEFIT_LIST, "S_ACCOUNT_BENEFIT_LIST", S_ACCOUNT_BENEFIT_LIST_f },
		{ S_CONFIRM_INVITE_CODE_BUTTON, "S_CONFIRM_INVITE_CODE_BUTTON", S_CONFIRM_INVITE_CODE_BUTTON_f },
		{ S_REMAIN_PLAY_TIME, "S_REMAIN_PLAY_TIME", S_REMAIN_PLAY_TIME_f },
		{ S_LOADING_SCREEN_CONTROL_INFO, "S_LOADING_SCREEN_CONTROL_INFO", S_LOADING_SCREEN_CONTROL_INFO_f },

		{ OPC_MAX, NULL, NULL }
	},
};
