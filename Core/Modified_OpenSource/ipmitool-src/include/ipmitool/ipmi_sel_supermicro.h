/*
 * Copyright (c) 2003 Sun Microsystems, Inc.  All Rights Reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * Redistribution of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 
 * Redistribution in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 
 * Neither the name of Sun Microsystems, Inc. or the names of
 * contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * 
 * This software is provided "AS IS," without a warranty of any kind.
 * ALL EXPRESS OR IMPLIED CONDITIONS, REPRESENTATIONS AND WARRANTIES,
 * INCLUDING ANY IMPLIED WARRANTY OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE OR NON-INFRINGEMENT, ARE HEREBY EXCLUDED.
 * SUN MICROSYSTEMS, INC. ("SUN") AND ITS LICENSORS SHALL NOT BE LIABLE
 * FOR ANY DAMAGES SUFFERED BY LICENSEE AS A RESULT OF USING, MODIFYING
 * OR DISTRIBUTING THIS SOFTWARE OR ITS DERIVATIVES.  IN NO EVENT WILL
 * SUN OR ITS LICENSORS BE LIABLE FOR ANY LOST REVENUE, PROFIT OR DATA,
 * OR FOR DIRECT, INDIRECT, SPECIAL, CONSEQUENTIAL, INCIDENTAL OR
 * PUNITIVE DAMAGES, HOWEVER CAUSED AND REGARDLESS OF THE THEORY OF
 * LIABILITY, ARISING OUT OF THE USE OF OR INABILITY TO USE THIS SOFTWARE,
 * EVEN IF SUN HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 */


#ifndef IPMI_SEL_SUPERMICRO_H
# define IPMI_SEL_SUPERMICRO_H

#if 0
static uint16_t supermicro_x11[] = {
		0x0958, 0x0955, 0x0953, 0x0952, 0x0941, 0x093A, 0x0939, 0x0938, 0x0937, 0x0930, 0x0927, 0x091D,
		0x091C, 0x0917, 0x090D, 0x0909, 0x0907,	0x0901, 0x089F, 0x089C, 0x089B, 0x089A, 0x0898, 0x0896,
		0x0895, 0x0894, 0x0891, 0x0890, 0x0888,	0x0886, 0x0885, 0x0884, 0xFFFF
};

static uint16_t supermicro_b11[] = {
		0xFFFF
};

static uint16_t supermicro_b2[] = {
		0x0951, 0x094E, 0x0931, 0x092E, 0x092A, 0x0928, 0x0908, 0xFFFF
};
#endif

static uint16_t supermicro_x10OBi[] = {
		0x0923, 0xFFFF
};

static uint16_t supermicro_x10QRH[] = {
		0x0872, 0xFFFF
};

static uint16_t supermicro_x10QBL[] = {
		0x0853, 0xFFFF
};

static uint16_t supermicro_brickland[] = {
		0x0726, 0x083A, 0xFFFF
};

#if 0
static uint16_t supermicro_x9dal[] = {
		0x0635, 0xFFFF
};

static uint16_t supermicro_x9db[] = {
		0x0733, 0x0722, 0x0703, 0x0721, 0x0716, 0x0637, 0xFFFF
};

static uint16_t supermicro_x9sb[] = {
		0x0651, 0xFFFF
};
#endif
static uint16_t supermicro_x9[] = {
		0x0635, 0x0733, 0x0722, 0x0703, 0x0721, 0x0716, 0x0637, 0x0651, 0xFFFF
};

static uint16_t supermicro_romely[] = {
		0x0841, 0x0732, 0x0731, 0x0730, 0x0727, 0x0725, 0x0724, 0x0723, 0x0720, 0x0718,	0x0717, 0x0715,
		0x0713, 0x0711, 0x070E, 0x070A, 0x0709, 0x0708, 0x0706, 0x0705,	0x0704, 0x0702, 0x0701, 0x0700,
		0x066F, 0x066E, 0x066D, 0x0669, 0x0667, 0x0666, 0x0665,	0x0664, 0x0662, 0x0660, 0x0636, 0x0630,
		0x062F, 0x062C, 0x0628, 0x0626, 0x0827,	0x070F, 0x0707, 0x0840, 0x0729, 0x0719, 0x0712, 0x070D,
		0x066C, 0x066A, 0x0625, 0x0714, 0x0710,	0x070C, 0x070B, 0x0668, 0x0663, 0x0661, 0x062B, 0x062A,
		0x0629, 0x093E, 0x0932,	0x092D, 0x092B, 0x0924, 0x0922, 0x0921, 0x091E, 0x0919, 0x0916, 0x089D,
		0x0899,	0x0893, 0x0892, 0x0882, 0x0881, 0x0880, 0x087F, 0x087D, 0x0879, 0x0877, 0x086F, 0x086E,
		0x086D, 0x086C, 0x086B, 0x085C, 0x085B, 0x084B, 0x0865, 0x0864, 0x0860, 0x0859, 0x0858, 0x0857,
		0x0854, 0x0852, 0x0845, 0x0844, 0x0843, 0x0842, 0x083B, 0x0838, 0x0837, 0x0836,	0x0835, 0x0834,
		0x0833, 0x0832, 0x0831, 0x0830, 0x0826, 0x0825, 0x0824, 0x0822, 0x0821, 0x0819,	0x0818, 0x0817,
		0x0816, 0x0815, 0x0814, 0x0728, 0x0813, 0x0812, 0x0810, 0x0807,	0x0806, 0x0805, 0x0804, 0x0803,
		0x0802, 0x0801, 0x0889, 0x0861, 0x083E, 0x0846, 0x0946, 0x0950, 0xFFFF
};
#if 0
static uint16_t supermicro_b8[] = {
		0x000A, 0x061c, 0x0620, 0x0101, 0x061f, 0x0612, 0x061e, 0xFFFF
};

static uint16_t supermicro_h8[] = {
		0xa111, 0x0408, 0x0811, 0x1411, 0x0911, 0x1211, 0x1011, 0xcd11, 0x1111, 0xbe11, 0xce11, 0xbd11,
		0xbc11, 0xa911, 0xaa11, 0xcb11, 0xad11, 0xa811, 0xac11, 0xaf11, 0xa511, 0xa011, 0x1611, 0x2511,
		0xbf11, 0x1511, 0x2211, 0x2411, 0x1911, 0xab11, 0xd011, 0xae11, 0xca11, 0x0409, 0xa211,	0xa311,
		0x1311, 0xba11, 0xa711, 0xd111, 0x1711, 0xcf11, 0x2011, 0x1811, 0xFFFF
};

static uint16_t supermicro_p8[] = {
		0x5980, 0x6280, 0x6480, 0x7380, 0x7480, 0x0933, 0x094F, 0xFFFF
};

static uint16_t supermicro_x8[] = {
		0xa880, 0x0403, 0x0100, 0x0601, 0x0001, 0x0404, 0x0606, 0x0608, 0x0632, 0x0400, 0x0401, 0x0006,
		0x040a, 0xf280, 0x060f, 0x0609, 0x0008, 0x0613, 0x061b, 0x0007, 0x0600, 0x060c, 0x060d, 0x0614,
		0x0003, 0x040b, 0x0621, 0x0610, 0x0638, 0xf380, 0x060b, 0x040d, 0x0605, 0x062d, 0x060e,	0x061a,
		0xf580, 0x062e, 0x0009, 0xFFFF
};
#endif

static uint16_t supermicro_X8[] = {
		0x000A, 0x061c, 0x0620, 0x0101, 0x061f, 0x0612, 0x061e, 0xa111, 0x0408, 0x0811, 0x1411, 0x0911,
		0x1211, 0x1011, 0xcd11, 0x1111, 0xbe11, 0xce11, 0xbd11, 0xbc11, 0xa911, 0xaa11, 0xcb11,	0xad11,
		0xa811, 0xac11, 0xaf11, 0xa511, 0xa011, 0x1611, 0x2511, 0xbf11, 0x1511, 0x2211, 0x2411,	0x1911,
		0xab11, 0xd011, 0xae11, 0xca11, 0x0409, 0xa211, 0xa311, 0x1311, 0xba11, 0xa711, 0xd111,	0x1711,
		0xcf11, 0x2011, 0x1811, 0x5980, 0x6280, 0x6480, 0x7380, 0x7480, 0x0933, 0x094F, 0xa880, 0x0403,
		0x0100,	0x0601,	0x0001, 0x0404, 0x0606, 0x0608, 0x0632, 0x0400, 0x0401, 0x0006, 0x040a, 0xf280,
		0x060f,	0x0609,	0x0008, 0x0613, 0x061b, 0x0007, 0x0600, 0x060c, 0x060d, 0x0614, 0x0003, 0x040b,
		0x0621, 0x0610,	0x0638, 0xf380, 0x060b, 0x040d, 0x0605, 0x062d, 0x060e, 0x061a, 0xf580, 0x062e,
		0x0009, 0xFFFF
};

static uint16_t supermicro_older[] = {
		0x8080, 0x8180, 0x8280, 0x8480, 0x8580, 0x8680, 0x8780, 0x8880, 0x8980, 0x9080, 0x9180,	0x9280,
		0x9380, 0x9480, 0x9580, 0x9680, 0x9780, 0xA080,	0x9880, 0x9980, 0xB080, 0xB180, 0xB280, 0xB380,
		0xB480,	0xA280, 0xB580, 0xB680, 0xA580, 0xB780, 0xD180, 0xA380, 0xA480, 0xD680, 0xBA80, 0xD280,
		0x2111, 0xD380, 0xBC80, 0xBD80, 0xBE80, 0xC080, 0xC180, 0xAA80, 0xBE80, 0xBF80, 0xAB80, 0xD480,
		0xD580, 0xAF80, 0xAE80, 0xC280, 0xAC80, 0xD080, 0xDA80, 0xDB80, 0xDC80, 0xDD80, 0xA680,	0xDE80,
		0xAA80, 0xDF80, 0xBB80, 0xA780, 0xF080, 0xF180, 0xB880, 0xC380, 0xB780,	0x2311, 0xA980, 0xF480,
		0xB980, 0x0002,	0xba80, 0x0602, 0x0603, 0x0604, 0x0607, 0x0410,	0xA611, 0x060A,	0x0611,	0xBB11,
		0x061D,	0x0622, 0x0623, 0x0624,	0x0627,	0x0631, 0x0633, 0x0634,	0x0690, 0x0691, 0x0640, 0x0641,
		0x0642, 0x066B,	0x0743, 0x0644,	0x0645, 0x0645,	0x0646, 0x0647, 0x0648, 0x0647,	0x0650, 0x0652,
		0x0653, 0x0654, 0x0655, 0x0808, 0x0809, 0x0656, 0x0657,	0x0658, 0x0659,	0x0820, 0x0820,	0x0734,
		0x0823, 0x0828, 0x0829,	0x0839, 0x083C,	0x083D, 0x083F, 0x0847,	0x0848, 0x0849, 0x0850, 0x0851,
		0x0855, 0x0856,	0x0862, 0x0863, 0x0866, 0x0867, 0x0868, 0x0869, 0x084A,	0x084C, 0x084D, 0x084F,
		0x085A, 0x085D, 0x085E, 0x085F, 0x086A,	0x0870, 0x0873, 0x0874, 0x0875, 0x0876, 0x0878,	0x087A,
		0x087B, 0x087C, 0x087E, 0x0883,	0x0887, 0x088A, 0x088B, 0x088C, 0x088D, 0x088E, 0x088F,	0x0897,
		0x089E, 0x0902, 0x0903, 0x0904, 0x0905, 0x0906, 0x090A,	0x090B, 0x090C, 0x090E, 0x090F, 0x0910,
		0x0912, 0x0913, 0x0914, 0x0915,	0x0918, 0x091A, 0x091B, 0x091F, 0x0920,	0x0925, 0x0926, 0x0929,
		0x092C,	0x092F, 0x0934, 0x0935, 0x0936,	0x093B, 0x093C, 0x093D, 0x093F, 0x0940, 0x0942,	0x0943,
		0x0944, 0x0945, 0x0947, 0x0948, 0x0949, 0x094A, 0x094B, 0x094C, 0x094D, 0x094E, 0x0954, 0x0956,
		0x0957, 0x0959, 0xFFFF
};

#endif /* IPMI_SEL_SUPERMICRO_H */
