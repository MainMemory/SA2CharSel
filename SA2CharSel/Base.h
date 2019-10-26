#pragma once

void InitBase();
__declspec(naked) void LoadEmeraldManager_r();
template <typename T1, typename T2> struct pair { T1 key; T2 value; };

pair<short, short> SonicAnimReplacements[] = {
	{ 211, 1 },
	{ 212, 77 },
	{ 215, 15 }
};

pair<short, short> OthersAnimReplacements[] = {
	{ 76, 0 },
	{ 77, 15 },
	{ 185, 62 },
	{ 186, 62 },
	{ 187, 62 },
	{ 189, 62 },
	{ 190, 62 },
	{ 192, 15 },
	{ 193, 15 },
	{ 194, 15 },
	{ 195, 15 },
	{ 196, 15 },
	{ 197, 15 },
	{ 198, 15 },
	{ 211, 1 },
	{ 212, 62 },
	{ 215, 15 }
};

pair<short, short> KnucklesAnimReplacements[] = {
	{ 190, 75 },
	{ 192, 105 },
	{ 193, 105 },
	{ 194, 15 },
	{ 195, 15 },
	{ 196, 15 },
	{ 197, 15 },
	{ 198, 15 },
	{ 211, 1 },
	{ 212, 77 },
	{ 215, 15 }
};

pair<short, short> MechAnimReplacements[] = {
	{ 76, 0 },
	{ 77, 15 },
	{ 185, 75 },
	{ 186, 75 },
	{ 187, 75 },
	{ 189, 75 },
	{ 190, 75 },
	{ 192, 15 },
	{ 193, 15 },
	{ 194, 15 },
	{ 195, 15 },
	{ 196, 15 },
	{ 197, 15 },
	{ 198, 15 },
	{ 211, 1 },
	{ 212, 77 },
	{ 215, 15 }
};
