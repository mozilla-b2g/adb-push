#include <stdio.h>
#include "file_sync_service.h"

int adb_commandline(int argc, char **argv)
{
	if (argc < 2) {
		printf("Usage: adb-push <src> <dst>\n");
		return -1;
	}

	return do_sync_push(argv[0], argv[1], 0);
}
