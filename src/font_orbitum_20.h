// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const char Orbitron_Medium_20[] PROGMEM = {
	0x1C, // Width: 28
	0x14, // Height: 20
	0x20, // First Char: 32
	0xE0, // Numbers of Chars: 224

	// Jump Table:
	0xFF, 0xFF, 0x00, 0x06,  // 32:65535
	0x00, 0x00, 0x08, 0x04,  // 33:0
	0x00, 0x08, 0x10, 0x07,  // 34:8
	0x00, 0x18, 0x2C, 0x10,  // 35:24
	0x00, 0x44, 0x2C, 0x10,  // 36:68
	0x00, 0x70, 0x35, 0x13,  // 37:112
	0x00, 0xA5, 0x35, 0x13,  // 38:165
	0x00, 0xDA, 0x07, 0x04,  // 39:218
	0x00, 0xE1, 0x0B, 0x06,  // 40:225
	0x00, 0xEC, 0x0E, 0x06,  // 41:236
	0x00, 0xFA, 0x19, 0x0A,  // 42:250
	0x01, 0x13, 0x17, 0x09,  // 43:275
	0x01, 0x2A, 0x09, 0x04,  // 44:298
	0x01, 0x33, 0x1A, 0x0A,  // 45:307
	0x01, 0x4D, 0x08, 0x04,  // 46:333
	0x01, 0x55, 0x1C, 0x0A,  // 47:341
	0x01, 0x71, 0x2F, 0x11,  // 48:369
	0x01, 0xA0, 0x14, 0x08,  // 49:416
	0x01, 0xB4, 0x2F, 0x11,  // 50:436
	0x01, 0xE3, 0x2C, 0x11,  // 51:483
	0x02, 0x0F, 0x29, 0x0F,  // 52:527
	0x02, 0x38, 0x2F, 0x11,  // 53:568
	0x02, 0x67, 0x2F, 0x10,  // 54:615
	0x02, 0x96, 0x23, 0x0D,  // 55:662
	0x02, 0xB9, 0x2F, 0x11,  // 56:697
	0x02, 0xE8, 0x2C, 0x11,  // 57:744
	0x03, 0x14, 0x08, 0x04,  // 58:788
	0x03, 0x1C, 0x09, 0x04,  // 59:796
	0x03, 0x25, 0x17, 0x09,  // 60:805
	0x03, 0x3C, 0x23, 0x0D,  // 61:828
	0x03, 0x5F, 0x1A, 0x0A,  // 62:863
	0x03, 0x79, 0x26, 0x0E,  // 63:889
	0x03, 0x9F, 0x2F, 0x11,  // 64:927
	0x03, 0xCE, 0x2F, 0x11,  // 65:974
	0x03, 0xFD, 0x2F, 0x11,  // 66:1021
	0x04, 0x2C, 0x2C, 0x10,  // 67:1068
	0x04, 0x58, 0x2F, 0x11,  // 68:1112
	0x04, 0x87, 0x29, 0x0F,  // 69:1159
	0x04, 0xB0, 0x28, 0x0E,  // 70:1200
	0x04, 0xD8, 0x2F, 0x11,  // 71:1240
	0x05, 0x07, 0x2F, 0x11,  // 72:1287
	0x05, 0x36, 0x08, 0x04,  // 73:1334
	0x05, 0x3E, 0x29, 0x10,  // 74:1342
	0x05, 0x67, 0x2C, 0x10,  // 75:1383
	0x05, 0x93, 0x2F, 0x10,  // 76:1427
	0x05, 0xC2, 0x32, 0x13,  // 77:1474
	0x05, 0xF4, 0x2F, 0x11,  // 78:1524
	0x06, 0x23, 0x2C, 0x11,  // 79:1571
	0x06, 0x4F, 0x2E, 0x10,  // 80:1615
	0x06, 0x7D, 0x32, 0x12,  // 81:1661
	0x06, 0xAF, 0x2F, 0x11,  // 82:1711
	0x06, 0xDE, 0x2C, 0x10,  // 83:1758
	0x07, 0x0A, 0x2B, 0x0F,  // 84:1802
	0x07, 0x35, 0x2C, 0x11,  // 85:1845
	0x07, 0x61, 0x37, 0x14,  // 86:1889
	0x07, 0x98, 0x43, 0x18,  // 87:1944
	0x07, 0xDB, 0x2C, 0x10,  // 88:2011
	0x08, 0x07, 0x2E, 0x10,  // 89:2055
	0x08, 0x35, 0x2C, 0x10,  // 90:2101
	0x08, 0x61, 0x0E, 0x06,  // 91:2145
	0x08, 0x6F, 0x1D, 0x0A,  // 92:2159
	0x08, 0x8C, 0x0B, 0x06,  // 93:2188
	0xFF, 0xFF, 0x00, 0x00,  // 94:65535
	0x08, 0x97, 0x2D, 0x11,  // 95:2199
	0xFF, 0xFF, 0x00, 0x04,  // 96:65535
	0x08, 0xC4, 0x26, 0x0E,  // 97:2244
	0x08, 0xEA, 0x26, 0x0D,  // 98:2282
	0x09, 0x10, 0x26, 0x0E,  // 99:2320
	0x09, 0x36, 0x23, 0x0D,  // 100:2358
	0x09, 0x59, 0x26, 0x0E,  // 101:2393
	0x09, 0x7F, 0x16, 0x08,  // 102:2431
	0x09, 0x95, 0x27, 0x0E,  // 103:2453
	0x09, 0xBC, 0x26, 0x0D,  // 104:2492
	0x09, 0xE2, 0x08, 0x04,  // 105:2530
	0x09, 0xEA, 0x0C, 0x05,  // 106:2538
	0x09, 0xF6, 0x26, 0x0D,  // 107:2550
	0x0A, 0x1C, 0x11, 0x06,  // 108:2588
	0x0A, 0x2D, 0x38, 0x14,  // 109:2605
	0x0A, 0x65, 0x26, 0x0E,  // 110:2661
	0x0A, 0x8B, 0x26, 0x0E,  // 111:2699
	0x0A, 0xB1, 0x26, 0x0D,  // 112:2737
	0x0A, 0xD7, 0x24, 0x0D,  // 113:2775
	0x0A, 0xFB, 0x1C, 0x0A,  // 114:2811
	0x0B, 0x17, 0x26, 0x0E,  // 115:2839
	0x0B, 0x3D, 0x17, 0x08,  // 116:2877
	0x0B, 0x54, 0x26, 0x0E,  // 117:2900
	0x0B, 0x7A, 0x2B, 0x10,  // 118:2938
	0x0B, 0xA5, 0x3D, 0x15,  // 119:2981
	0x0B, 0xE2, 0x26, 0x0E,  // 120:3042
	0x0C, 0x08, 0x27, 0x0E,  // 121:3080
	0x0C, 0x2F, 0x26, 0x0E,  // 122:3119
	0x0C, 0x55, 0x0E, 0x06,  // 123:3157
	0x0C, 0x63, 0x09, 0x04,  // 124:3171
	0x0C, 0x6C, 0x0E, 0x06,  // 125:3180
	0x0C, 0x7A, 0x17, 0x08,  // 126:3194
	0xFF, 0xFF, 0x00, 0x00,  // 127:65535
	0xFF, 0xFF, 0x00, 0x00,  // 128:65535
	0xFF, 0xFF, 0x00, 0x00,  // 129:65535
	0xFF, 0xFF, 0x00, 0x00,  // 130:65535
	0xFF, 0xFF, 0x00, 0x00,  // 131:65535
	0xFF, 0xFF, 0x00, 0x00,  // 132:65535
	0xFF, 0xFF, 0x00, 0x00,  // 133:65535
	0xFF, 0xFF, 0x00, 0x00,  // 134:65535
	0xFF, 0xFF, 0x00, 0x00,  // 135:65535
	0xFF, 0xFF, 0x00, 0x00,  // 136:65535
	0xFF, 0xFF, 0x00, 0x00,  // 137:65535
	0xFF, 0xFF, 0x00, 0x00,  // 138:65535
	0xFF, 0xFF, 0x00, 0x00,  // 139:65535
	0xFF, 0xFF, 0x00, 0x00,  // 140:65535
	0xFF, 0xFF, 0x00, 0x00,  // 141:65535
	0xFF, 0xFF, 0x00, 0x00,  // 142:65535
	0xFF, 0xFF, 0x00, 0x00,  // 143:65535
	0xFF, 0xFF, 0x00, 0x00,  // 144:65535
	0xFF, 0xFF, 0x00, 0x00,  // 145:65535
	0xFF, 0xFF, 0x00, 0x00,  // 146:65535
	0xFF, 0xFF, 0x00, 0x00,  // 147:65535
	0xFF, 0xFF, 0x00, 0x00,  // 148:65535
	0xFF, 0xFF, 0x00, 0x00,  // 149:65535
	0xFF, 0xFF, 0x00, 0x00,  // 150:65535
	0xFF, 0xFF, 0x00, 0x00,  // 151:65535
	0xFF, 0xFF, 0x00, 0x00,  // 152:65535
	0xFF, 0xFF, 0x00, 0x00,  // 153:65535
	0xFF, 0xFF, 0x00, 0x00,  // 154:65535
	0xFF, 0xFF, 0x00, 0x00,  // 155:65535
	0xFF, 0xFF, 0x00, 0x00,  // 156:65535
	0xFF, 0xFF, 0x00, 0x00,  // 157:65535
	0xFF, 0xFF, 0x00, 0x00,  // 158:65535
	0xFF, 0xFF, 0x00, 0x00,  // 159:65535
	0xFF, 0xFF, 0x00, 0x00,  // 160:65535
	0x0C, 0x91, 0x08, 0x04,  // 161:3217
	0x0C, 0x99, 0x23, 0x0D,  // 162:3225
	0x0C, 0xBC, 0x29, 0x0F,  // 163:3260
	0xFF, 0xFF, 0x00, 0x00,  // 164:65535
	0xFF, 0xFF, 0x00, 0x00,  // 165:65535
	0xFF, 0xFF, 0x00, 0x00,  // 166:65535
	0xFF, 0xFF, 0x00, 0x00,  // 167:65535
	0xFF, 0xFF, 0x00, 0x08,  // 168:65535
	0xFF, 0xFF, 0x00, 0x00,  // 169:65535
	0xFF, 0xFF, 0x00, 0x00,  // 170:65535
	0xFF, 0xFF, 0x00, 0x00,  // 171:65535
	0xFF, 0xFF, 0x00, 0x00,  // 172:65535
	0xFF, 0xFF, 0x00, 0x00,  // 173:65535
	0xFF, 0xFF, 0x00, 0x00,  // 174:65535
	0xFF, 0xFF, 0x00, 0x00,  // 175:65535
	0x0C, 0xE5, 0x16, 0x09,  // 176:3301
	0xFF, 0xFF, 0x00, 0x00,  // 177:65535
	0xFF, 0xFF, 0x00, 0x00,  // 178:65535
	0xFF, 0xFF, 0x00, 0x00,  // 179:65535
	0xFF, 0xFF, 0x00, 0x04,  // 180:65535
	0xFF, 0xFF, 0x00, 0x00,  // 181:65535
	0x0C, 0xFB, 0x2F, 0x11,  // 182:3323
	0xFF, 0xFF, 0x00, 0x00,  // 183:65535
	0x0D, 0x2A, 0x0B, 0x04,  // 184:3370
	0xFF, 0xFF, 0x00, 0x00,  // 185:65535
	0xFF, 0xFF, 0x00, 0x00,  // 186:65535
	0xFF, 0xFF, 0x00, 0x00,  // 187:65535
	0xFF, 0xFF, 0x00, 0x00,  // 188:65535
	0xFF, 0xFF, 0x00, 0x00,  // 189:65535
	0xFF, 0xFF, 0x00, 0x00,  // 190:65535
	0x0D, 0x35, 0x26, 0x0E,  // 191:3381
	0x0D, 0x5B, 0x2F, 0x11,  // 192:3419
	0x0D, 0x8A, 0x2F, 0x11,  // 193:3466
	0x0D, 0xB9, 0x2F, 0x11,  // 194:3513
	0x0D, 0xE8, 0x2F, 0x11,  // 195:3560
	0x0E, 0x17, 0x2F, 0x11,  // 196:3607
	0x0E, 0x46, 0x2F, 0x11,  // 197:3654
	0x0E, 0x75, 0x50, 0x1C,  // 198:3701
	0x0E, 0xC5, 0x2C, 0x10,  // 199:3781
	0x0E, 0xF1, 0x29, 0x0F,  // 200:3825
	0x0F, 0x1A, 0x29, 0x0F,  // 201:3866
	0x0F, 0x43, 0x29, 0x0F,  // 202:3907
	0x0F, 0x6C, 0x29, 0x0F,  // 203:3948
	0x0F, 0x95, 0x08, 0x04,  // 204:3989
	0x0F, 0x9D, 0x08, 0x04,  // 205:3997
	0x0F, 0xA5, 0x08, 0x04,  // 206:4005
	0x0F, 0xAD, 0x08, 0x04,  // 207:4013
	0xFF, 0xFF, 0x00, 0x00,  // 208:65535
	0x0F, 0xB5, 0x2F, 0x11,  // 209:4021
	0x0F, 0xE4, 0x2C, 0x11,  // 210:4068
	0x10, 0x10, 0x2C, 0x11,  // 211:4112
	0x10, 0x3C, 0x2C, 0x11,  // 212:4156
	0x10, 0x68, 0x2C, 0x11,  // 213:4200
	0x10, 0x94, 0x2C, 0x11,  // 214:4244
	0x10, 0xC0, 0x1D, 0x0B,  // 215:4288
	0xFF, 0xFF, 0x00, 0x00,  // 216:65535
	0x10, 0xDD, 0x2C, 0x11,  // 217:4317
	0x11, 0x09, 0x2C, 0x11,  // 218:4361
	0x11, 0x35, 0x2C, 0x11,  // 219:4405
	0x11, 0x61, 0x2C, 0x11,  // 220:4449
	0x11, 0x8D, 0x2E, 0x10,  // 221:4493
	0xFF, 0xFF, 0x00, 0x00,  // 222:65535
	0x11, 0xBB, 0x2F, 0x11,  // 223:4539
	0x11, 0xEA, 0x26, 0x0F,  // 224:4586
	0x12, 0x10, 0x26, 0x0F,  // 225:4624
	0x12, 0x36, 0x26, 0x0F,  // 226:4662
	0x12, 0x5C, 0x26, 0x0F,  // 227:4700
	0x12, 0x82, 0x26, 0x0F,  // 228:4738
	0x12, 0xA8, 0x26, 0x0F,  // 229:4776
	0x12, 0xCE, 0x44, 0x18,  // 230:4814
	0x13, 0x12, 0x26, 0x0E,  // 231:4882
	0x13, 0x38, 0x26, 0x0D,  // 232:4920
	0x13, 0x5E, 0x26, 0x0D,  // 233:4958
	0x13, 0x84, 0x26, 0x0D,  // 234:4996
	0x13, 0xAA, 0x26, 0x0D,  // 235:5034
	0x13, 0xD0, 0x08, 0x04,  // 236:5072
	0x13, 0xD8, 0x08, 0x04,  // 237:5080
	0x13, 0xE0, 0x0A, 0x04,  // 238:5088
	0x13, 0xEA, 0x0A, 0x04,  // 239:5098
	0xFF, 0xFF, 0x00, 0x00,  // 240:65535
	0x13, 0xF4, 0x26, 0x0E,  // 241:5108
	0x14, 0x1A, 0x26, 0x0E,  // 242:5146
	0x14, 0x40, 0x26, 0x0E,  // 243:5184
	0x14, 0x66, 0x26, 0x0E,  // 244:5222
	0x14, 0x8C, 0x26, 0x0E,  // 245:5260
	0x14, 0xB2, 0x26, 0x0E,  // 246:5298
	0x14, 0xD8, 0x1D, 0x0A,  // 247:5336
	0xFF, 0xFF, 0x00, 0x00,  // 248:65535
	0x14, 0xF5, 0x26, 0x0E,  // 249:5365
	0x15, 0x1B, 0x26, 0x0E,  // 250:5403
	0x15, 0x41, 0x26, 0x0E,  // 251:5441
	0x15, 0x67, 0x26, 0x0E,  // 252:5479
	0x15, 0x8D, 0x27, 0x0E,  // 253:5517
	0xFF, 0xFF, 0x00, 0x00,  // 254:65535
	0x15, 0xB4, 0x27, 0x0E,  // 255:5556

	// Font Data:
	0x00,0x00,0x00,0xFE,0x67,0x00,0xFE,0x67,	// 33
	0x00,0x00,0x00,0x0E,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x0E,	// 34
	0x00,0x00,0x00,0x30,0x4C,0x00,0x30,0x7C,0x00,0x30,0x7F,0x00,0xF0,0x0F,0x00,0xFC,0x0D,0x00,0x3E,0x0C,0x00,0x36,0x0C,0x00,0x30,0x6C,0x00,0x30,0x7C,0x00,0xB0,0x3F,0x00,0xF0,0x0F,0x00,0x7E,0x0C,0x00,0x3E,0x0C,0x00,0x32,0x0C,	// 35
	0x00,0x00,0x00,0xFE,0x30,0x00,0xFE,0x71,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0xFF,0xFF,0x01,0xFF,0xFF,0x01,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x8E,0x7F,0x00,0x0C,0x3F,	// 36
	0x00,0x00,0x00,0x3C,0x00,0x00,0x7E,0x00,0x00,0x42,0x70,0x00,0x42,0x38,0x00,0x42,0x1C,0x00,0x7E,0x0E,0x00,0x3C,0x07,0x00,0x00,0x03,0x00,0x80,0x01,0x00,0xC0,0x01,0x00,0xE0,0x1C,0x00,0x70,0x7E,0x00,0x38,0x63,0x00,0x1C,0x63,0x00,0x0C,0x63,0x00,0x0E,0x63,0x00,0x00,0x3E,	// 37
	0x00,0x00,0x00,0x80,0x3F,0x00,0xFE,0x7F,0x00,0xFE,0x60,0x00,0xC6,0x60,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x06,0x63,0x00,0x06,0x63,0x00,0x06,0x66,0x00,0x06,0x66,0x00,0x06,0x6C,0x00,0x06,0x6C,0x00,0x0E,0x7F,0x00,0x0C,0x3F,0x00,0x00,0x38,0x00,0x00,0x30,0x00,0x00,0x60,	// 38
	0x00,0x00,0x00,0x0E,0x00,0x00,0x0E,	// 39
	0x00,0x00,0x00,0xFC,0x3F,0x00,0xFE,0x7F,0x00,0x06,0x60,	// 40
	0x00,0x00,0x00,0x06,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x3F,0x00,0xF8,0x1F,	// 41
	0x00,0x00,0x00,0x18,0x00,0x00,0xD8,0x00,0x00,0xF8,0x01,0x00,0x7E,0x00,0x00,0xFE,0x00,0x00,0xF8,0x01,0x00,0x98,0x00,0x00,0x18,	// 42
	0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0xE0,0x1F,0x00,0xE0,0x1F,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,	// 43
	0x00,0x00,0x00,0x00,0xE0,0x03,0x00,0xE0,0x01,	// 44
	0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,	// 45
	0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x60,	// 46
	0x00,0x70,0x00,0x00,0x38,0x00,0x00,0x1C,0x00,0x00,0x07,0x00,0x80,0x03,0x00,0xC0,0x01,0x00,0xE0,0x00,0x00,0x70,0x00,0x00,0x1C,0x00,0x00,0x0E,	// 47
	0x00,0x00,0x00,0xFC,0x3F,0x00,0xFE,0x7F,0x00,0x06,0x7C,0x00,0x06,0x6C,0x00,0x06,0x6E,0x00,0x06,0x67,0x00,0x86,0x63,0x00,0xC6,0x61,0x00,0xE6,0x60,0x00,0x66,0x60,0x00,0x76,0x60,0x00,0x3E,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x3F,0x00,0xF8,0x1F,	// 48
	0x20,0x00,0x00,0x10,0x00,0x00,0x1C,0x00,0x00,0x1E,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0xFE,0x7F,	// 49
	0x00,0x00,0x00,0x0C,0x7F,0x00,0x8E,0x7F,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0xFE,0x61,0x00,0xFE,0x61,0x00,0x78,0x60,	// 50
	0x00,0x00,0x00,0x0C,0x30,0x00,0x0E,0x70,0x00,0x06,0x60,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0xFE,0x7F,0x00,0xFC,0x3F,	// 51
	0x00,0x06,0x00,0x00,0x07,0x00,0x80,0x07,0x00,0xC0,0x07,0x00,0xE0,0x06,0x00,0x70,0x06,0x00,0x78,0x06,0x00,0x38,0x06,0x00,0x1C,0x06,0x00,0x0E,0x06,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x00,0x06,0x00,0x00,0x06,	// 52
	0x00,0x00,0x00,0xFE,0x31,0x00,0xFE,0x71,0x00,0xC6,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x7F,0x00,0x86,0x3F,0x00,0x06,0x1E,	// 53
	0x00,0x00,0x00,0xFC,0x3F,0x00,0xFE,0x7F,0x00,0xC6,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x80,0x7F,0x00,0x80,0x3F,0x00,0x00,0x1E,	// 54
	0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0xFE,0x7F,0x00,0xFC,0x7F,	// 55
	0x00,0x00,0x00,0x7C,0x3F,0x00,0xFE,0x7F,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0xFE,0x7F,0x00,0xFE,0x3F,0x00,0x78,0x1E,	// 56
	0x00,0x00,0x00,0xFC,0x20,0x00,0xFE,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0xFE,0x7F,0x00,0xFE,0x3F,	// 57
	0x00,0x00,0x00,0x18,0x60,0x00,0x18,0x60,	// 58
	0x00,0x00,0x00,0x18,0xE0,0x03,0x18,0xE0,0x01,	// 59
	0x00,0x03,0x00,0x80,0x07,0x00,0x80,0x0F,0x00,0xC0,0x0D,0x00,0xE0,0x1C,0x00,0x60,0x18,0x00,0x70,0x38,0x00,0x38,0x70,	// 60
	0x00,0x00,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,0x00,0xC0,0x0C,	// 61
	0x00,0x00,0x00,0x38,0x70,0x00,0x70,0x30,0x00,0x60,0x38,0x00,0xE0,0x18,0x00,0xC0,0x0C,0x00,0xC0,0x0F,0x00,0x80,0x07,0x00,0x00,0x07,	// 62
	0x00,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x67,0x00,0x86,0x67,0x00,0x86,0x01,0x00,0x86,0x01,0x00,0x86,0x01,0x00,0x86,0x01,0x00,0x86,0x01,0x00,0x86,0x01,0x00,0xFE,0x01,0x00,0xFE,0x01,	// 63
	0x00,0x00,0x00,0xFC,0x3F,0x00,0xFE,0x7F,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0xE6,0x63,0x00,0xE6,0x67,0x00,0x36,0x66,0x00,0x36,0x66,0x00,0x36,0x66,0x00,0xE6,0x67,0x00,0xC6,0x67,0x00,0x06,0x66,0x00,0xFE,0x67,0x00,0xFE,0x67,0x00,0xF8,0x67,	// 64
	0x00,0x00,0x00,0xFC,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0xF8,0x7F,	// 65
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0xC6,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0xFE,0x7F,0x00,0xFC,0x7F,0x00,0x00,0x1E,	// 66
	0x00,0x00,0x00,0xFC,0x3F,0x00,0xFE,0x7F,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,	// 67
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0xF8,0x1F,	// 68
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x06,0x60,0x00,0x06,0x60,	// 69
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x86,0x01,0x00,0x86,0x01,0x00,0x86,0x01,0x00,0x86,0x01,0x00,0x86,0x01,0x00,0x86,0x01,0x00,0x86,0x01,0x00,0x86,0x01,0x00,0x86,0x01,0x00,0x06,0x00,0x00,0x06,	// 70
	0x00,0x00,0x00,0xFC,0x3F,0x00,0xFE,0x7F,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x8E,0x7F,0x00,0x8E,0x3F,0x00,0x88,0x1F,	// 71
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0xFE,0x7F,0x00,0xFE,0x7F,	// 72
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,	// 73
	0x00,0x38,0x00,0x00,0x78,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x3F,	// 74
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0xC0,0x01,0x00,0xE0,0x03,0x00,0x70,0x0F,0x00,0x38,0x1E,0x00,0x1C,0x38,0x00,0x0E,0x70,0x00,0x06,0x60,0x00,0x02,0x40,	// 75
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,	// 76
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x0E,0x00,0x00,0x1C,0x00,0x00,0x38,0x00,0x00,0x70,0x00,0x00,0xE0,0x01,0x00,0xC0,0x03,0x00,0x80,0x07,0x00,0xC0,0x01,0x00,0xE0,0x00,0x00,0x78,0x00,0x00,0x3C,0x00,0x00,0x0E,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,	// 77
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x0E,0x00,0x00,0x1C,0x00,0x00,0x38,0x00,0x00,0x70,0x00,0x00,0xE0,0x01,0x00,0xC0,0x03,0x00,0x00,0x07,0x00,0x00,0x0E,0x00,0x00,0x1C,0x00,0x00,0x38,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0xFE,0x7F,	// 78
	0x00,0x00,0x00,0xFC,0x3F,0x00,0xFE,0x7F,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x3F,	// 79
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0xFE,0x03,0x00,0xFE,0x01,0x00,0xF8,	// 80
	0x00,0x00,0x00,0xFC,0x3F,0x00,0xFE,0x7F,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x00,0x60,0x00,0x00,0x60,	// 81
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x07,0x00,0x06,0x0F,0x00,0x06,0x1F,0x00,0x06,0x3B,0x00,0xFE,0x73,0x00,0xFE,0x41,0x00,0x78,0x40,	// 82
	0x00,0x00,0x00,0xFC,0x30,0x00,0xFE,0x71,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x8E,0x7F,0x00,0x8E,0x3F,	// 83
	0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x06,	// 84
	0x00,0x00,0x00,0xFE,0x3F,0x00,0xFE,0x7F,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x3F,	// 85
	0x00,0x00,0x00,0x02,0x00,0x00,0x0E,0x00,0x00,0x1E,0x00,0x00,0x78,0x00,0x00,0xE0,0x01,0x00,0xC0,0x07,0x00,0x00,0x0F,0x00,0x00,0x3C,0x00,0x00,0x70,0x00,0x00,0x70,0x00,0x00,0x3C,0x00,0x00,0x1F,0x00,0x80,0x07,0x00,0xE0,0x01,0x00,0xF8,0x00,0x00,0x3E,0x00,0x00,0x0E,0x00,0x00,0x02,	// 86
	0x00,0x00,0x00,0x06,0x00,0x00,0x3E,0x00,0x00,0xFC,0x00,0x00,0xE0,0x07,0x00,0x80,0x3F,0x00,0x00,0x7C,0x00,0x00,0x7E,0x00,0xC0,0x1F,0x00,0xF0,0x03,0x00,0x7E,0x00,0x00,0x1E,0x00,0x00,0x3E,0x00,0x00,0xFC,0x00,0x00,0xE0,0x07,0x00,0x00,0x3F,0x00,0x00,0x7C,0x00,0x00,0x7E,0x00,0xC0,0x1F,0x00,0xF0,0x03,0x00,0x7E,0x00,0x00,0x0E,0x00,0x00,0x02,	// 87
	0x00,0x00,0x00,0x02,0x40,0x00,0x06,0x60,0x00,0x0E,0x70,0x00,0x1C,0x3C,0x00,0x38,0x1E,0x00,0xF0,0x07,0x00,0xE0,0x03,0x00,0xC0,0x03,0x00,0xF0,0x07,0x00,0x78,0x0E,0x00,0x1C,0x1C,0x00,0x0E,0x78,0x00,0x06,0x60,0x00,0x02,0x40,	// 88
	0x02,0x00,0x00,0x02,0x00,0x00,0x0E,0x00,0x00,0x1E,0x00,0x00,0x38,0x00,0x00,0xF0,0x00,0x00,0xE0,0x01,0x00,0xC0,0x7F,0x00,0x80,0x7F,0x00,0xE0,0x01,0x00,0xF0,0x00,0x00,0x38,0x00,0x00,0x1C,0x00,0x00,0x0E,0x00,0x00,0x02,0x00,0x00,0x02,	// 89
	0x00,0x00,0x00,0x06,0x70,0x00,0x06,0x78,0x00,0x06,0x7C,0x00,0x06,0x6C,0x00,0x06,0x6E,0x00,0x06,0x67,0x00,0x86,0x63,0x00,0xC6,0x61,0x00,0xE6,0x60,0x00,0x76,0x60,0x00,0x36,0x60,0x00,0x3E,0x60,0x00,0x1E,0x60,0x00,0x0E,0x60,	// 90
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x60,0x00,0x06,0x60,	// 91
	0x0E,0x00,0x00,0x1C,0x00,0x00,0x38,0x00,0x00,0x70,0x00,0x00,0xE0,0x00,0x00,0x80,0x03,0x00,0x00,0x07,0x00,0x00,0x0E,0x00,0x00,0x1C,0x00,0x00,0x78,	// 92
	0x00,0x00,0x00,0x06,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x7F,	// 93
	0x00,0x00,0x00,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0x80,0x01,	// 95
	0x00,0x00,0x00,0x38,0x3F,0x00,0x38,0x7F,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0xF0,0x7F,0x00,0xE0,0x7F,	// 97
	0x00,0x00,0x00,0xFF,0x7F,0x00,0xFF,0x7F,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0xF0,0x7F,0x00,0xE0,0x3F,	// 98
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x7F,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,	// 99
	0xE0,0x1F,0x00,0xF0,0x3F,0x00,0xF8,0x7F,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0xFF,0x7F,0x00,0xFF,0x7F,	// 100
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x7F,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0xF0,0x63,0x00,0xE0,0x63,	// 101
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFF,0x7F,0x00,0x3B,0x00,0x00,0x3B,0x00,0x00,0x3B,0x00,0x00,0x3B,0x00,0x00,0x3B,	// 102
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x7F,0x00,0x38,0x60,0x0E,0x38,0x60,0x0E,0x38,0x60,0x0E,0x38,0x60,0x0E,0x38,0x60,0x0E,0x38,0x60,0x0E,0x38,0x60,0x0E,0xF8,0xFF,0x0F,0xF0,0xFF,0x07,0xE0,0xFF,0x03,	// 103
	0x00,0x00,0x00,0xFF,0x7F,0x00,0xFF,0x7F,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0xF0,0x7F,0x00,0xE0,0x7F,	// 104
	0x00,0x00,0x00,0xFB,0x7F,0x00,0xFB,0x7F,	// 105
	0x00,0x00,0x0E,0x00,0x00,0x0E,0xFB,0xFF,0x07,0xFB,0xFF,0x03,	// 106
	0x00,0x00,0x00,0xFF,0x7F,0x00,0xFF,0x7F,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x80,0x07,0x00,0xC0,0x0F,0x00,0xE0,0x1C,0x00,0x70,0x38,0x00,0x38,0x70,0x00,0x18,0x60,0x00,0x08,0x40,	// 107
	0x00,0x00,0x00,0xFF,0x3F,0x00,0xFF,0x7F,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,	// 108
	0x00,0x00,0x00,0xF8,0x7F,0x00,0xF8,0x7F,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0xF8,0x7F,0x00,0xF8,0x7F,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0xF8,0x7F,0x00,0xF0,0x7F,0x00,0xC0,0x7F,	// 109
	0x00,0x00,0x00,0xF8,0x7F,0x00,0xF8,0x7F,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0xF0,0x7F,0x00,0xE0,0x7F,	// 110
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x7F,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0xF0,0x7F,0x00,0xE0,0x3F,	// 111
	0x00,0x00,0x00,0xF8,0xFF,0x0F,0xF8,0xFF,0x0F,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0xF0,0x7F,0x00,0xE0,0x3F,	// 112
	0xE0,0x1F,0x00,0xF0,0x7F,0x00,0xF8,0x7F,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0xF8,0xFF,0x0F,0xF8,0xFF,0x0F,	// 113
	0x00,0x00,0x00,0xE0,0x7F,0x00,0xF0,0x7F,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,	// 114
	0x00,0x00,0x00,0xF0,0x31,0x00,0xF0,0x73,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x30,0x7F,0x00,0x20,0x3C,	// 115
	0x00,0x00,0x00,0xFF,0x3F,0x00,0xFF,0x7F,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,	// 116
	0x00,0x00,0x00,0xF8,0x3F,0x00,0xF8,0x7F,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0xF8,0x7F,0x00,0xF8,0x3F,	// 117
	0x08,0x00,0x00,0x18,0x00,0x00,0x78,0x00,0x00,0xF0,0x01,0x00,0xC0,0x07,0x00,0x00,0x1F,0x00,0x00,0x3C,0x00,0x00,0x70,0x00,0x00,0x78,0x00,0x00,0x3C,0x00,0x00,0x0F,0x00,0xC0,0x03,0x00,0xF0,0x01,0x00,0x78,0x00,0x00,0x18,	// 118
	0x00,0x00,0x00,0x18,0x00,0x00,0xF8,0x00,0x00,0xE0,0x07,0x00,0x80,0x1F,0x00,0x00,0x7C,0x00,0x00,0x7C,0x00,0x00,0x3F,0x00,0xC0,0x0F,0x00,0xF8,0x01,0x00,0x78,0x00,0x00,0xF8,0x00,0x00,0xE0,0x03,0x00,0x80,0x1F,0x00,0x00,0x7E,0x00,0x00,0x78,0x00,0x00,0x7F,0x00,0xC0,0x0F,0x00,0xF8,0x01,0x00,0x78,0x00,0x00,0x08,	// 119
	0x00,0x00,0x00,0x08,0x40,0x00,0x38,0x60,0x00,0x78,0x70,0x00,0xE0,0x3C,0x00,0xC0,0x1F,0x00,0x80,0x07,0x00,0x80,0x07,0x00,0xC0,0x1F,0x00,0xF0,0x38,0x00,0x78,0x70,0x00,0x18,0x60,0x00,0x08,0x40,	// 120
	0x00,0x00,0x00,0xF8,0x3F,0x00,0xF8,0x7F,0x00,0x00,0x60,0x0E,0x00,0x60,0x0E,0x00,0x60,0x0E,0x00,0x60,0x0E,0x00,0x60,0x0E,0x00,0x60,0x0E,0x00,0x60,0x0E,0xF8,0xFF,0x0F,0xF8,0xFF,0x07,0xF8,0xFF,0x03,	// 121
	0x00,0x00,0x00,0x38,0x70,0x00,0x38,0x78,0x00,0x38,0x78,0x00,0x38,0x6C,0x00,0x38,0x6E,0x00,0x38,0x67,0x00,0xB8,0x63,0x00,0xB8,0x61,0x00,0xF8,0x61,0x00,0xF8,0x60,0x00,0x78,0x60,0x00,0x38,0x60,	// 122
	0x80,0x01,0x00,0xFC,0x1F,0x00,0x7E,0x7F,0x00,0x7E,0x7E,0x00,0x06,0x60,	// 123
	0x00,0x00,0x00,0xFF,0xFF,0x01,0xFF,0xFF,0x01,	// 124
	0x00,0x00,0x00,0x06,0x60,0x00,0x7E,0x7E,0x00,0xFE,0x3F,0x00,0xC0,0x01,	// 125
	0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,	// 126
	0x00,0x00,0x00,0xE6,0x7F,0x00,0xE6,0x7F,	// 161
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF8,0x7F,0x00,0x18,0x60,0x00,0x18,0x60,0x00,0xFE,0xFF,0x01,0xFE,0xFF,0x01,0xFE,0xFF,0x01,0x18,0x60,0x00,0x18,0x60,0x00,0x18,0x60,0x00,0x18,0x60,	// 162
	0x00,0x00,0x00,0x80,0x61,0x00,0x80,0x61,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x0E,0x60,0x00,0x0C,0x60,	// 163
	0x00,0x00,0x00,0x3C,0x00,0x00,0x7E,0x00,0x00,0x42,0x00,0x00,0x42,0x00,0x00,0x42,0x00,0x00,0x7E,0x00,0x00,0x3C,	// 176
	0x00,0x00,0x00,0xFC,0x01,0x00,0xFE,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0xFE,0x7F,	// 182
	0x00,0x00,0x00,0x00,0x80,0x03,0x00,0x80,0x03,0x00,0x80,	// 184
	0x00,0x1F,0x00,0x80,0x7F,0x00,0xC0,0x7F,0x00,0xC0,0x60,0x00,0xC0,0x60,0x00,0xC0,0x60,0x00,0xC0,0x60,0x00,0xC0,0x60,0x00,0xC0,0x60,0x00,0xF6,0x60,0x00,0x76,0x60,0x00,0x00,0x60,0x00,0x00,0x60,	// 191
	0x00,0x00,0x00,0xFC,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0xF8,0x7F,	// 192
	0x00,0x00,0x00,0xFC,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0xF8,0x7F,	// 193
	0x00,0x00,0x00,0xFC,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0xF8,0x7F,	// 194
	0x00,0x00,0x00,0xFC,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0xF8,0x7F,	// 195
	0x00,0x00,0x00,0xFC,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0xF8,0x7F,	// 196
	0x00,0x00,0x00,0xFC,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0xF8,0x7F,	// 197
	0x00,0x00,0x00,0xFC,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0x06,0x03,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,	// 198
	0x00,0x00,0x00,0xFC,0x3F,0x00,0xFE,0x7F,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0xE0,0x03,0x06,0xE0,0x03,0x06,0xE0,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,	// 199
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x06,0x60,0x00,0x06,0x60,	// 200
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x06,0x60,0x00,0x06,0x60,	// 201
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x06,0x60,0x00,0x06,0x60,	// 202
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x06,0x60,0x00,0x06,0x60,	// 203
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,	// 204
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,	// 205
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,	// 206
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,	// 207
	0x00,0x00,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0x0E,0x00,0x00,0x1C,0x00,0x00,0x38,0x00,0x00,0x70,0x00,0x00,0xE0,0x01,0x00,0xC0,0x03,0x00,0x00,0x07,0x00,0x00,0x0E,0x00,0x00,0x1C,0x00,0x00,0x38,0x00,0xFE,0x7F,0x00,0xFE,0x7F,0x00,0xFE,0x7F,	// 209
	0x00,0x00,0x00,0xFC,0x3F,0x00,0xFE,0x7F,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x3F,	// 210
	0x00,0x00,0x00,0xFC,0x3F,0x00,0xFE,0x7F,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x3F,	// 211
	0x00,0x00,0x00,0xFC,0x3F,0x00,0xFE,0x7F,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x3F,	// 212
	0x00,0x00,0x00,0xFC,0x3F,0x00,0xFE,0x7F,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x3F,	// 213
	0x00,0x00,0x00,0xFC,0x3F,0x00,0xFE,0x7F,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0x06,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x3F,	// 214
	0x00,0x00,0x00,0x20,0x10,0x00,0x60,0x18,0x00,0xE0,0x1C,0x00,0xC0,0x0F,0x00,0x80,0x07,0x00,0xC0,0x0F,0x00,0xE0,0x1C,0x00,0x60,0x18,0x00,0x20,0x10,	// 215
	0x00,0x00,0x00,0xFE,0x3F,0x00,0xFE,0x7F,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x3F,	// 217
	0x00,0x00,0x00,0xFE,0x3F,0x00,0xFE,0x7F,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x3F,	// 218
	0x00,0x00,0x00,0xFE,0x3F,0x00,0xFE,0x7F,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x3F,	// 219
	0x00,0x00,0x00,0xFE,0x3F,0x00,0xFE,0x7F,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0xFE,0x7F,0x00,0xFE,0x3F,	// 220
	0x01,0x00,0x00,0x02,0x00,0x00,0x0E,0x00,0x00,0x1E,0x00,0x00,0x38,0x00,0x00,0xF0,0x00,0x00,0xE0,0x01,0x00,0xC0,0x7F,0x00,0x80,0x7F,0x00,0xE0,0x01,0x00,0xF0,0x00,0x00,0x38,0x00,0x00,0x1C,0x00,0x00,0x0E,0x00,0x00,0x02,0x00,0x00,0x01,	// 221
	0x00,0x00,0x00,0xFC,0x7F,0x00,0xFE,0x7F,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0x86,0x61,0x00,0xFE,0x7F,0x00,0xFE,0x3F,0x00,0x78,0x1E,	// 223
	0x00,0x00,0x00,0x38,0x3F,0x00,0x38,0x7F,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x39,0x63,0x00,0x39,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0xF0,0x7F,0x00,0xE0,0x7F,	// 224
	0x00,0x00,0x00,0x38,0x3F,0x00,0x38,0x7F,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x39,0x63,0x00,0x39,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0xF0,0x7F,0x00,0xE0,0x7F,	// 225
	0x00,0x00,0x00,0x38,0x3F,0x00,0x38,0x7F,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x39,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x39,0x63,0x00,0x39,0x63,0x00,0x38,0x63,0x00,0xF0,0x7F,0x00,0xE0,0x7F,	// 226
	0x00,0x00,0x00,0x38,0x3F,0x00,0x38,0x7F,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x39,0x63,0x00,0x38,0x63,0x00,0xF0,0x7F,0x00,0xE0,0x7F,	// 227
	0x00,0x00,0x00,0x38,0x3F,0x00,0x38,0x7F,0x00,0x38,0x63,0x00,0x39,0x63,0x00,0x39,0x63,0x00,0x39,0x63,0x00,0x38,0x63,0x00,0x39,0x63,0x00,0x39,0x63,0x00,0x38,0x63,0x00,0xF0,0x7F,0x00,0xE0,0x7F,	// 228
	0x00,0x00,0x00,0x38,0x3F,0x00,0x38,0x7F,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x39,0x63,0x00,0x39,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0xF0,0x7F,0x00,0xE0,0x7F,	// 229
	0x00,0x00,0x00,0x38,0x3F,0x00,0x38,0x7F,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0xF8,0x7F,0x00,0xF8,0x7F,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0xF8,0x63,0x00,0xF0,0x63,0x00,0xC0,0x63,	// 230
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x7F,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x02,0x38,0xE0,0x03,0x38,0xE0,0x03,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,	// 231
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x7F,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x39,0x63,0x00,0x39,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0xF0,0x63,0x00,0xE0,0x63,	// 232
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x7F,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x39,0x63,0x00,0x39,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0xF0,0x63,0x00,0xE0,0x63,	// 233
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x7F,0x00,0x38,0x63,0x00,0x39,0x63,0x00,0x39,0x63,0x00,0x38,0x63,0x00,0x39,0x63,0x00,0x39,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0xF0,0x63,0x00,0xE0,0x63,	// 234
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x7F,0x00,0x38,0x63,0x00,0x39,0x63,0x00,0x39,0x63,0x00,0x38,0x63,0x00,0x39,0x63,0x00,0x39,0x63,0x00,0x38,0x63,0x00,0x38,0x63,0x00,0xF0,0x63,0x00,0xE0,0x63,	// 235
	0x00,0x00,0x00,0xF9,0x7F,0x00,0xF9,0x7F,	// 236
	0x00,0x00,0x00,0xF9,0x7F,0x00,0xF9,0x7F,	// 237
	0x01,0x00,0x00,0xF8,0x7F,0x00,0xF8,0x7F,0x00,0x01,	// 238
	0x01,0x00,0x00,0xF9,0x7F,0x00,0xF8,0x7F,0x00,0x01,	// 239
	0x00,0x00,0x00,0xF8,0x7F,0x00,0xF8,0x7F,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x39,0x00,0x00,0x39,0x00,0x00,0x38,0x00,0x00,0xF0,0x7F,0x00,0xE0,0x7F,	// 241
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x7F,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x39,0x60,0x00,0x39,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0xF0,0x7F,0x00,0xE0,0x3F,	// 242
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x7F,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x39,0x60,0x00,0x39,0x60,0x00,0x39,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0xF0,0x7F,0x00,0xE0,0x3F,	// 243
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x7F,0x00,0x38,0x60,0x00,0x39,0x60,0x00,0x39,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x39,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0xF0,0x7F,0x00,0xE0,0x3F,	// 244
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x7F,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x39,0x60,0x00,0x39,0x60,0x00,0x38,0x60,0x00,0xF0,0x7F,0x00,0xE0,0x3F,	// 245
	0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x7F,0x00,0x38,0x60,0x00,0x39,0x60,0x00,0x39,0x60,0x00,0x38,0x60,0x00,0x38,0x60,0x00,0x39,0x60,0x00,0x39,0x60,0x00,0x38,0x60,0x00,0xF0,0x7F,0x00,0xE0,0x3F,	// 246
	0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x18,0x63,0x00,0x18,0x63,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x00,0x03,	// 247
	0x00,0x00,0x00,0xF8,0x3F,0x00,0xF8,0x7F,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x01,0x60,0x00,0x01,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0xF8,0x7F,0x00,0xF8,0x3F,	// 249
	0x00,0x00,0x00,0xF8,0x3F,0x00,0xF8,0x7F,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x01,0x60,0x00,0x01,0x60,0x00,0x01,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0xF8,0x7F,0x00,0xF8,0x3F,	// 250
	0x00,0x00,0x00,0xF8,0x3F,0x00,0xF8,0x7F,0x00,0x00,0x60,0x00,0x01,0x60,0x00,0x01,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x01,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0xF8,0x7F,0x00,0xF8,0x3F,	// 251
	0x00,0x00,0x00,0xF8,0x3F,0x00,0xF8,0x7F,0x00,0x00,0x60,0x00,0x01,0x60,0x00,0x01,0x60,0x00,0x00,0x60,0x00,0x00,0x60,0x00,0x01,0x60,0x00,0x01,0x60,0x00,0x00,0x60,0x00,0xF8,0x7F,0x00,0xF8,0x3F,	// 252
	0x00,0x00,0x00,0xF8,0x3F,0x00,0xF8,0x7F,0x00,0x00,0x60,0x0E,0x00,0x60,0x0E,0x01,0x60,0x0E,0x01,0x60,0x0E,0x01,0x60,0x0E,0x00,0x60,0x0E,0x00,0x60,0x0E,0xF8,0xFF,0x0F,0xF8,0xFF,0x07,0xF8,0xFF,0x03,	// 253
	0x00,0x00,0x00,0xF8,0x3F,0x00,0xF8,0x7F,0x00,0x00,0x60,0x0E,0x01,0x60,0x0E,0x01,0x60,0x0E,0x00,0x60,0x0E,0x01,0x60,0x0E,0x01,0x60,0x0E,0x01,0x60,0x0E,0xF8,0xFF,0x0F,0xF8,0xFF,0x07,0xF8,0xFF,0x03	// 255
};