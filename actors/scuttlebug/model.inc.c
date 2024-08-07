/**************************************************************/
/*	shape data walker_F_walk (skeleton & animation) */
/**************************************************************/

#define ShapeColor_walker_F_walk(r,g,b)   ShapeColor(r,g,b)

/*-------------------------------------------------------------*/
/*	light data                                                 */
/*-------------------------------------------------------------*/

static Lights1 light_walker_F_walk[]={
	ShapeColor_walker_F_walk(178,0,0),
	ShapeColor_walker_F_walk(0,0,0),
};

/*-------------------------------------------------------------*/
/*	vertex & polygon data                                      */
/*-------------------------------------------------------------*/

static Vtx vtx_walker_F_walk0[]={
	{56,-95,-4,0,0,0,-80,-46,-86,0},
	{0,-1,-1,0,0,0,-80,-46,-86,0},
	{56,48,-81,0,0,0,-80,-46,-86,0},
	{0,-1,-1,0,0,0,-80,-52,83,0},
	{56,-95,-4,0,0,0,-80,-52,83,0},
	{56,42,82,0,0,0,-80,-52,83,0},
	{56,48,-81,0,0,0,127,0,0,0},
	{56,42,82,0,0,0,127,0,0,0},
	{56,-95,-4,0,0,0,127,0,0,0},
	{56,42,82,0,0,0,-81,97,3,0},
	{56,48,-81,0,0,0,-81,97,3,0},
	{0,-1,-1,0,0,0,-81,97,3,0},
};
static Vtx vtx_walker_F_walk1[]={
	{198,1,0,0,0,0,0,-17,-125,0},
	{-7,3,1,0,0,0,0,-17,-125,0},
	{32,35,-3,0,0,0,0,-17,-125,0},
};
static Vtx vtx_walker_F_walk2[]={
	{188,2,1,0,0,0,0,-17,-125,0},
	{-19,-4,1,0,0,0,0,-17,-125,0},
	{7,32,-3,0,0,0,0,-17,-125,0},
};
static Vtx vtx_walker_F_walk3[]={
	{59,44,80,0,0,0,-80,-49,84,0},
	{2,-4,0,0,0,0,-80,-49,84,0},
	{61,-98,0,0,0,0,-80,-49,84,0},
	{59,42,-82,0,0,0,-79,-50,-84,0},
	{61,-98,0,0,0,0,-79,-50,-84,0},
	{2,-4,0,0,0,0,-79,-50,-84,0},
	{61,-98,0,0,0,0,127,1,0,0},
	{59,42,-82,0,0,0,127,1,0,0},
	{59,44,80,0,0,0,127,1,0,0},
	{2,-4,0,0,0,0,-82,96,-1,0},
	{59,44,80,0,0,0,-82,96,-1,0},
	{59,42,-82,0,0,0,-82,96,-1,0},
};
static Vtx vtx_walker_F_walk4[]={
	{198,1,0,0,0,0,0,18,-125,0},
	{-7,2,0,0,0,0,0,18,-125,0},
	{32,35,4,0,0,0,0,18,-125,0},
};
static Vtx vtx_walker_F_walk5[]={
	{188,2,0,0,0,0,0,18,-125,0},
	{-19,-5,0,0,0,0,0,18,-125,0},
	{7,31,5,0,0,0,0,18,-125,0},
};
static Vtx vtx_walker_F_walk6[]={
	{-15,15,-52,0,0,0,-34,34,-117,0},
	{0,21,-52,0,0,0,0,48,-117,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{-28,28,-40,0,0,0,-63,62,-90,0},
	{0,40,-40,0,0,0,0,89,-90,0},
	{-37,37,-21,0,0,0,-83,82,-48,0},
	{0,52,-21,0,0,0,0,117,-48,0},
	{-40,40,0,0,0,0,-90,89,0,0},
	{0,57,0,0,0,0,0,127,0,0},
	{-37,37,21,0,0,0,-83,82,48,0},
	{0,52,21,0,0,0,0,117,48,0},
	{-28,28,40,0,0,0,-63,62,90,0},
	{0,40,40,0,0,0,0,89,90,0},
	{-15,15,52,0,0,0,-34,34,117,0},
	{0,21,52,0,0,0,0,48,117,0},
	{0,0,57,0,0,0,0,0,127,0},
	{-21,0,-52,0,0,0,-48,0,-117,0},
	{-15,15,-52,0,0,0,-34,34,-117,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{-40,0,-40,0,0,0,-89,0,-90,0},
	{-28,28,-40,0,0,0,-63,62,-90,0},
	{-52,0,-21,0,0,0,-117,0,-48,0},
	{-37,37,-21,0,0,0,-83,82,-48,0},
	{-57,0,0,0,0,0,-127,0,0,0},
	{-40,40,0,0,0,0,-90,89,0,0},
	{-52,0,21,0,0,0,-117,0,48,0},
	{-37,37,21,0,0,0,-83,82,48,0},
	{-40,0,40,0,0,0,-89,0,90,0},
	{-28,28,40,0,0,0,-63,62,90,0},
	{-21,0,52,0,0,0,-48,0,117,0},
	{-15,15,52,0,0,0,-34,34,117,0},
	{0,0,57,0,0,0,0,0,127,0},
	{-15,-15,-52,0,0,0,-34,-34,-117,0},
	{-21,0,-52,0,0,0,-48,0,-117,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{-28,-28,-40,0,0,0,-62,-63,-90,0},
	{-40,0,-40,0,0,0,-89,0,-90,0},
	{-37,-37,-21,0,0,0,-82,-83,-48,0},
	{-52,0,-21,0,0,0,-117,0,-48,0},
	{-40,-40,0,0,0,0,-89,-90,0,0},
	{-57,0,0,0,0,0,-127,0,0,0},
	{-37,-37,21,0,0,0,-82,-83,48,0},
	{-52,0,21,0,0,0,-117,0,48,0},
	{-28,-28,40,0,0,0,-62,-63,90,0},
	{-40,0,40,0,0,0,-89,0,90,0},
	{-15,-15,52,0,0,0,-34,-34,117,0},
	{-21,0,52,0,0,0,-48,0,117,0},
	{0,0,57,0,0,0,0,0,127,0},
	{0,-21,-52,0,0,0,0,-48,-117,0},
	{-15,-15,-52,0,0,0,-34,-34,-117,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{0,-40,-40,0,0,0,0,-89,-90,0},
	{-28,-28,-40,0,0,0,-62,-63,-90,0},
	{0,-52,-21,0,0,0,0,-117,-48,0},
	{-37,-37,-21,0,0,0,-82,-83,-48,0},
	{0,-57,0,0,0,0,0,-127,0,0},
	{-40,-40,0,0,0,0,-89,-90,0,0},
	{0,-52,21,0,0,0,0,-117,48,0},
	{-37,-37,21,0,0,0,-82,-83,48,0},
	{0,-40,40,0,0,0,0,-89,90,0},
	{-28,-28,40,0,0,0,-62,-63,90,0},
	{0,-21,52,0,0,0,0,-48,117,0},
	{-15,-15,52,0,0,0,-34,-34,117,0},
	{0,0,57,0,0,0,0,0,127,0},
	{15,-15,-52,0,0,0,34,-34,-117,0},
	{0,-21,-52,0,0,0,0,-48,-117,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{28,-28,-40,0,0,0,63,-62,-90,0},
	{0,-40,-40,0,0,0,0,-89,-90,0},
	{37,-37,-21,0,0,0,83,-82,-48,0},
	{0,-52,-21,0,0,0,0,-117,-48,0},
	{40,-40,0,0,0,0,90,-89,0,0},
	{0,-57,0,0,0,0,0,-127,0,0},
	{37,-37,21,0,0,0,83,-82,48,0},
	{0,-52,21,0,0,0,0,-117,48,0},
	{28,-28,40,0,0,0,63,-62,90,0},
	{0,-40,40,0,0,0,0,-89,90,0},
	{15,-15,52,0,0,0,34,-34,117,0},
	{0,-21,52,0,0,0,0,-48,117,0},
	{0,0,57,0,0,0,0,0,127,0},
	{21,0,-52,0,0,0,48,0,-117,0},
	{15,-15,-52,0,0,0,34,-34,-117,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{40,0,-40,0,0,0,89,0,-90,0},
	{28,-28,-40,0,0,0,63,-62,-90,0},
	{52,0,-21,0,0,0,117,0,-48,0},
	{37,-37,-21,0,0,0,83,-82,-48,0},
	{56,0,0,0,0,0,127,0,0,0},
	{40,-40,0,0,0,0,90,-89,0,0},
	{52,0,21,0,0,0,117,0,48,0},
	{37,-37,21,0,0,0,83,-82,48,0},
	{40,0,40,0,0,0,89,0,90,0},
	{28,-28,40,0,0,0,63,-62,90,0},
	{21,0,52,0,0,0,48,0,117,0},
	{15,-15,52,0,0,0,34,-34,117,0},
	{0,0,57,0,0,0,0,0,127,0},
	{15,15,-52,0,0,0,34,34,-117,0},
	{21,0,-52,0,0,0,48,0,-117,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{28,28,-40,0,0,0,62,63,-90,0},
	{40,0,-40,0,0,0,89,0,-90,0},
	{36,37,-21,0,0,0,82,83,-48,0},
	{52,0,-21,0,0,0,117,0,-48,0},
	{39,40,0,0,0,0,89,90,0,0},
	{56,0,0,0,0,0,127,0,0,0},
	{36,37,21,0,0,0,82,83,48,0},
	{52,0,21,0,0,0,117,0,48,0},
	{28,28,40,0,0,0,62,63,90,0},
	{40,0,40,0,0,0,89,0,90,0},
	{15,15,52,0,0,0,34,34,117,0},
	{21,0,52,0,0,0,48,0,117,0},
	{0,0,57,0,0,0,0,0,127,0},
	{0,21,-52,0,0,0,0,48,-117,0},
	{15,15,-52,0,0,0,34,34,-117,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{0,40,-40,0,0,0,0,89,-90,0},
	{28,28,-40,0,0,0,62,63,-90,0},
	{0,52,-21,0,0,0,0,117,-48,0},
	{36,37,-21,0,0,0,82,83,-48,0},
	{0,57,0,0,0,0,0,127,0,0},
	{39,40,0,0,0,0,89,90,0,0},
	{0,52,21,0,0,0,0,117,48,0},
	{36,37,21,0,0,0,82,83,48,0},
	{0,40,40,0,0,0,0,89,90,0},
	{28,28,40,0,0,0,62,63,90,0},
	{0,21,52,0,0,0,0,48,117,0},
	{15,15,52,0,0,0,34,34,117,0},
	{0,0,57,0,0,0,0,0,127,0},
};
static Vtx vtx_walker_F_walk7[]={
	{0,0,-57,0,0,0,0,0,-127,0},
	{0,-21,-52,0,0,0,0,-48,-117,0},
	{-15,-15,-52,0,0,0,-34,-34,-117,0},
	{0,-40,-40,0,0,0,0,-89,-90,0},
	{-28,-28,-40,0,0,0,-63,-63,-90,0},
	{0,-52,-21,0,0,0,0,-117,-48,0},
	{-37,-37,-21,0,0,0,-82,-82,-48,0},
	{0,-57,0,0,0,0,0,-127,0,0},
	{-40,-40,0,0,0,0,-89,-89,0,0},
	{0,-52,21,0,0,0,0,-117,48,0},
	{-37,-37,21,0,0,0,-82,-82,48,0},
	{0,-40,40,0,0,0,0,-89,90,0},
	{-28,-28,40,0,0,0,-63,-63,90,0},
	{0,-21,52,0,0,0,0,-48,117,0},
	{-15,-15,52,0,0,0,-34,-34,117,0},
	{0,0,57,0,0,0,0,0,127,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{-15,-15,-52,0,0,0,-34,-34,-117,0},
	{-21,0,-52,0,0,0,-48,0,-117,0},
	{-28,-28,-40,0,0,0,-63,-63,-90,0},
	{-40,0,-40,0,0,0,-89,0,-90,0},
	{-37,-37,-21,0,0,0,-82,-82,-48,0},
	{-52,0,-21,0,0,0,-117,0,-48,0},
	{-40,-40,0,0,0,0,-89,-89,0,0},
	{-57,0,0,0,0,0,-127,0,0,0},
	{-37,-37,21,0,0,0,-82,-82,48,0},
	{-52,0,21,0,0,0,-117,0,48,0},
	{-28,-28,40,0,0,0,-63,-63,90,0},
	{-40,0,40,0,0,0,-89,0,90,0},
	{-15,-15,52,0,0,0,-34,-34,117,0},
	{-21,0,52,0,0,0,-48,0,117,0},
	{0,0,57,0,0,0,0,0,127,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{-21,0,-52,0,0,0,-48,0,-117,0},
	{-15,15,-52,0,0,0,-34,34,-117,0},
	{-40,0,-40,0,0,0,-89,0,-90,0},
	{-28,28,-40,0,0,0,-63,63,-90,0},
	{-52,0,-21,0,0,0,-117,0,-48,0},
	{-37,37,-21,0,0,0,-82,82,-48,0},
	{-57,0,0,0,0,0,-127,0,0,0},
	{-40,40,0,0,0,0,-89,89,0,0},
	{-52,0,21,0,0,0,-117,0,48,0},
	{-37,37,21,0,0,0,-82,82,48,0},
	{-40,0,40,0,0,0,-89,0,90,0},
	{-28,28,40,0,0,0,-63,63,90,0},
	{-21,0,52,0,0,0,-48,0,117,0},
	{-15,15,52,0,0,0,-34,34,117,0},
	{0,0,57,0,0,0,0,0,127,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{-15,15,-52,0,0,0,-34,34,-117,0},
	{0,21,-52,0,0,0,0,48,-117,0},
	{-28,28,-40,0,0,0,-63,63,-90,0},
	{0,40,-40,0,0,0,0,89,-90,0},
	{-37,37,-21,0,0,0,-82,82,-48,0},
	{0,52,-21,0,0,0,0,117,-48,0},
	{-40,40,0,0,0,0,-89,89,0,0},
	{0,57,0,0,0,0,0,127,0,0},
	{-37,37,21,0,0,0,-82,82,48,0},
	{0,52,21,0,0,0,0,117,48,0},
	{-28,28,40,0,0,0,-63,63,90,0},
	{0,40,40,0,0,0,0,89,90,0},
	{-15,15,52,0,0,0,-34,34,117,0},
	{0,21,52,0,0,0,0,48,117,0},
	{0,0,57,0,0,0,0,0,127,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{0,21,-52,0,0,0,0,48,-117,0},
	{15,15,-52,0,0,0,34,34,-117,0},
	{0,40,-40,0,0,0,0,89,-90,0},
	{28,28,-40,0,0,0,63,63,-90,0},
	{0,52,-21,0,0,0,0,117,-48,0},
	{37,37,-21,0,0,0,82,82,-48,0},
	{0,57,0,0,0,0,0,127,0,0},
	{40,40,0,0,0,0,89,89,0,0},
	{0,52,21,0,0,0,0,117,48,0},
	{37,37,21,0,0,0,82,82,48,0},
	{0,40,40,0,0,0,0,89,90,0},
	{28,28,40,0,0,0,63,63,90,0},
	{0,21,52,0,0,0,0,48,117,0},
	{15,15,52,0,0,0,34,34,117,0},
	{0,0,57,0,0,0,0,0,127,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{15,15,-52,0,0,0,34,34,-117,0},
	{21,0,-52,0,0,0,48,0,-117,0},
	{28,28,-40,0,0,0,63,63,-90,0},
	{40,0,-40,0,0,0,89,0,-90,0},
	{37,37,-21,0,0,0,82,82,-48,0},
	{52,0,-21,0,0,0,117,0,-48,0},
	{40,40,0,0,0,0,89,89,0,0},
	{57,0,0,0,0,0,127,0,0,0},
	{37,37,21,0,0,0,82,82,48,0},
	{52,0,21,0,0,0,117,0,48,0},
	{28,28,40,0,0,0,63,63,90,0},
	{40,0,40,0,0,0,89,0,90,0},
	{15,15,52,0,0,0,34,34,117,0},
	{21,0,52,0,0,0,48,0,117,0},
	{0,0,57,0,0,0,0,0,127,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{21,0,-52,0,0,0,48,0,-117,0},
	{15,-15,-52,0,0,0,34,-34,-117,0},
	{40,0,-40,0,0,0,89,0,-90,0},
	{28,-28,-40,0,0,0,63,-63,-90,0},
	{52,0,-21,0,0,0,117,0,-48,0},
	{37,-37,-21,0,0,0,82,-82,-48,0},
	{57,0,0,0,0,0,127,0,0,0},
	{40,-40,0,0,0,0,89,-89,0,0},
	{52,0,21,0,0,0,117,0,48,0},
	{37,-37,21,0,0,0,82,-82,48,0},
	{40,0,40,0,0,0,89,0,90,0},
	{28,-28,40,0,0,0,63,-63,90,0},
	{21,0,52,0,0,0,48,0,117,0},
	{15,-15,52,0,0,0,34,-34,117,0},
	{0,0,57,0,0,0,0,0,127,0},
	{0,0,-57,0,0,0,0,0,-127,0},
	{15,-15,-52,0,0,0,34,-34,-117,0},
	{0,-21,-52,0,0,0,0,-48,-117,0},
	{28,-28,-40,0,0,0,63,-63,-90,0},
	{0,-40,-40,0,0,0,0,-89,-90,0},
	{37,-37,-21,0,0,0,82,-82,-48,0},
	{0,-52,-21,0,0,0,0,-117,-48,0},
	{40,-40,0,0,0,0,89,-89,0,0},
	{0,-57,0,0,0,0,0,-127,0,0},
	{37,-37,21,0,0,0,82,-82,48,0},
	{0,-52,21,0,0,0,0,-117,48,0},
	{28,-28,40,0,0,0,63,-63,90,0},
	{0,-40,40,0,0,0,0,-89,90,0},
	{15,-15,52,0,0,0,34,-34,117,0},
	{0,-21,52,0,0,0,0,-48,117,0},
	{0,0,57,0,0,0,0,0,127,0},
};
static Vtx vtx_walker_F_walk8[]={
	{56,-98,-3,0,0,0,-80,-46,-86,0},
	{0,-4,0,0,0,0,-80,-46,-86,0},
	{56,45,-80,0,0,0,-80,-46,-86,0},
	{0,-4,0,0,0,0,-80,-51,83,0},
	{56,-98,-3,0,0,0,-80,-51,83,0},
	{56,40,83,0,0,0,-80,-51,83,0},
	{56,45,-80,0,0,0,127,0,0,0},
	{56,40,83,0,0,0,127,0,0,0},
	{56,-98,-3,0,0,0,127,0,0,0},
	{56,40,83,0,0,0,-81,97,3,0},
	{56,45,-80,0,0,0,-81,97,3,0},
	{0,-4,0,0,0,0,-81,97,3,0},
};
static Vtx vtx_walker_F_walk9[]={
	{198,1,0,0,0,0,0,-17,-125,0},
	{-7,0,1,0,0,0,0,-17,-125,0},
	{32,33,-3,0,0,0,0,-17,-125,0},
};
static Vtx vtx_walker_F_walk10[]={
	{188,0,1,0,0,0,0,-17,-125,0},
	{-20,-4,1,0,0,0,0,-17,-125,0},
	{7,32,-3,0,0,0,0,-17,-125,0},
};
static Vtx vtx_walker_F_walk11[]={
	{56,45,80,0,0,0,-80,-46,86,0},
	{0,-4,0,0,0,0,-80,-46,86,0},
	{56,-98,3,0,0,0,-80,-46,86,0},
	{56,40,-83,0,0,0,-80,-51,-83,0},
	{56,-98,3,0,0,0,-80,-51,-83,0},
	{0,-4,0,0,0,0,-80,-51,-83,0},
	{56,-98,3,0,0,0,127,0,0,0},
	{56,40,-83,0,0,0,127,0,0,0},
	{56,45,80,0,0,0,127,0,0,0},
	{0,-4,0,0,0,0,-81,97,-3,0},
	{56,45,80,0,0,0,-81,97,-3,0},
	{56,40,-83,0,0,0,-81,97,-3,0},
};
static Vtx vtx_walker_F_walk12[]={
	{35,31,3,0,0,0,0,-17,125,0},
	{-4,-1,-1,0,0,0,0,-17,125,0},
	{201,1,0,0,0,0,0,-17,125,0},
};
static Vtx vtx_walker_F_walk13[]={
	{8,32,3,0,0,0,0,-17,125,0},
	{-20,-4,-1,0,0,0,0,-17,125,0},
	{188,-1,-1,0,0,0,0,-17,125,0},
};
static Vtx vtx_walker_F_walk14[]={
	{68,0,212,0,0,0,31,0,123,0},
	{3,0,216,0,0,0,31,0,123,0},
	{112,-169,107,0,0,0,27,-59,108,0},
	{159,-134,102,0,0,0,27,-59,108,0},
	{159,135,102,0,0,0,27,59,108,0},
	{112,170,107,0,0,0,27,59,108,0},
};
static Vtx vtx_walker_F_walk15[]={
	{-151,-45,-44,0,0,0,-117,-34,-34,0},
	{-151,-64,0,0,0,0,-117,-48,0,0},
	{-163,-1,0,0,0,0,-127,0,0,0},
	{-115,-83,-81,0,0,0,-90,-63,-63,0},
	{-115,-117,0,0,0,0,-90,-89,0,0},
	{-62,-108,-107,0,0,0,-48,-82,-82,0},
	{-62,-153,0,0,0,0,-48,-117,0,0},
	{0,-117,-116,0,0,0,0,-89,-89,0},
	{0,-165,0,0,0,0,0,-127,0,0},
	{63,-108,-107,0,0,0,48,-82,-82,0},
	{63,-153,0,0,0,0,48,-117,0,0},
	{117,-83,-81,0,0,0,90,-63,-63,0},
	{117,-117,0,0,0,0,90,-89,0,0},
	{152,-45,-44,0,0,0,117,-34,-34,0},
	{152,-64,0,0,0,0,117,-48,0,0},
	{165,-1,0,0,0,0,127,0,0,0},
	{-151,-1,-62,0,0,0,-117,0,-48,0},
	{-151,-45,-44,0,0,0,-117,-34,-34,0},
	{-163,-1,0,0,0,0,-127,0,0,0},
	{-115,-1,-116,0,0,0,-90,0,-89,0},
	{-115,-83,-81,0,0,0,-90,-63,-63,0},
	{-62,-1,-151,0,0,0,-48,0,-117,0},
	{-62,-108,-107,0,0,0,-48,-82,-82,0},
	{0,-1,-164,0,0,0,0,0,-127,0},
	{0,-117,-116,0,0,0,0,-89,-89,0},
	{63,-1,-151,0,0,0,48,0,-117,0},
	{63,-108,-107,0,0,0,48,-82,-82,0},
	{117,-1,-116,0,0,0,90,0,-89,0},
	{117,-83,-81,0,0,0,90,-63,-63,0},
	{152,-1,-62,0,0,0,117,0,-48,0},
	{152,-45,-44,0,0,0,117,-34,-34,0},
	{165,-1,0,0,0,0,127,0,0,0},
	{-151,43,-44,0,0,0,-117,34,-34,0},
	{-151,-1,-62,0,0,0,-117,0,-48,0},
	{-163,-1,0,0,0,0,-127,0,0,0},
	{-115,81,-81,0,0,0,-90,63,-63,0},
	{-115,-1,-116,0,0,0,-90,0,-89,0},
	{-62,106,-107,0,0,0,-48,82,-82,0},
	{-62,-1,-151,0,0,0,-48,0,-117,0},
	{0,115,-116,0,0,0,0,89,-89,0},
	{0,-1,-164,0,0,0,0,0,-127,0},
	{63,106,-107,0,0,0,48,82,-82,0},
	{63,-1,-151,0,0,0,48,0,-117,0},
	{117,81,-81,0,0,0,90,63,-63,0},
	{117,-1,-116,0,0,0,90,0,-89,0},
	{152,43,-44,0,0,0,117,34,-34,0},
	{152,-1,-62,0,0,0,117,0,-48,0},
	{165,-1,0,0,0,0,127,0,0,0},
	{-151,61,0,0,0,0,-117,48,0,0},
	{-151,43,-44,0,0,0,-117,34,-34,0},
	{-163,-1,0,0,0,0,-127,0,0,0},
	{-115,115,0,0,0,0,-90,89,0,0},
	{-115,81,-81,0,0,0,-90,63,-63,0},
	{-62,150,0,0,0,0,-48,117,0,0},
	{-62,106,-107,0,0,0,-48,82,-82,0},
	{0,163,0,0,0,0,0,127,0,0},
	{0,115,-116,0,0,0,0,89,-89,0},
	{63,150,0,0,0,0,48,117,0,0},
	{63,106,-107,0,0,0,48,82,-82,0},
	{117,115,0,0,0,0,90,89,0,0},
	{117,81,-81,0,0,0,90,63,-63,0},
	{152,61,0,0,0,0,117,48,0,0},
	{152,43,-44,0,0,0,117,34,-34,0},
	{165,-1,0,0,0,0,127,0,0,0},
	{-151,43,44,0,0,0,-117,34,34,0},
	{-151,61,0,0,0,0,-117,48,0,0},
	{-163,-1,0,0,0,0,-127,0,0,0},
	{-115,81,82,0,0,0,-90,63,63,0},
	{-115,115,0,0,0,0,-90,89,0,0},
	{-62,106,107,0,0,0,-48,82,82,0},
	{-62,150,0,0,0,0,-48,117,0,0},
	{0,115,116,0,0,0,0,89,89,0},
	{0,163,0,0,0,0,0,127,0,0},
	{63,106,107,0,0,0,48,82,82,0},
	{63,150,0,0,0,0,48,117,0,0},
	{117,81,82,0,0,0,90,63,63,0},
	{117,115,0,0,0,0,90,89,0,0},
	{152,43,44,0,0,0,117,34,34,0},
	{152,61,0,0,0,0,117,48,0,0},
	{165,-1,0,0,0,0,127,0,0,0},
	{-151,-1,63,0,0,0,-117,0,48,0},
	{-151,43,44,0,0,0,-117,34,34,0},
	{-163,-1,0,0,0,0,-127,0,0,0},
	{-115,-1,116,0,0,0,-90,0,89,0},
	{-115,81,82,0,0,0,-90,63,63,0},
	{-62,-1,152,0,0,0,-48,0,117,0},
	{-62,106,107,0,0,0,-48,82,82,0},
	{0,-1,164,0,0,0,0,0,127,0},
	{0,115,116,0,0,0,0,89,89,0},
	{63,-1,152,0,0,0,48,0,117,0},
	{63,106,107,0,0,0,48,82,82,0},
	{117,-1,116,0,0,0,90,0,89,0},
	{117,81,82,0,0,0,90,63,63,0},
	{152,-1,63,0,0,0,117,0,48,0},
	{152,43,44,0,0,0,117,34,34,0},
	{165,-1,0,0,0,0,127,0,0,0},
	{-151,-45,44,0,0,0,-117,-34,34,0},
	{-151,-1,63,0,0,0,-117,0,48,0},
	{-163,-1,0,0,0,0,-127,0,0,0},
	{-115,-83,82,0,0,0,-90,-63,63,0},
	{-115,-1,116,0,0,0,-90,0,89,0},
	{-62,-108,107,0,0,0,-48,-82,82,0},
	{-62,-1,152,0,0,0,-48,0,117,0},
	{0,-117,116,0,0,0,0,-89,89,0},
	{0,-1,164,0,0,0,0,0,127,0},
	{63,-108,107,0,0,0,48,-82,82,0},
	{63,-1,152,0,0,0,48,0,117,0},
	{117,-83,82,0,0,0,90,-63,63,0},
	{117,-1,116,0,0,0,90,0,89,0},
	{152,-45,44,0,0,0,117,-34,34,0},
	{152,-1,63,0,0,0,117,0,48,0},
	{165,-1,0,0,0,0,127,0,0,0},
	{-151,-64,0,0,0,0,-117,-48,0,0},
	{-151,-45,44,0,0,0,-117,-34,34,0},
	{-163,-1,0,0,0,0,-127,0,0,0},
	{-115,-117,0,0,0,0,-90,-89,0,0},
	{-115,-83,82,0,0,0,-90,-63,63,0},
	{-62,-153,0,0,0,0,-48,-117,0,0},
	{-62,-108,107,0,0,0,-48,-82,82,0},
	{0,-165,0,0,0,0,0,-127,0,0},
	{0,-117,116,0,0,0,0,-89,89,0},
	{63,-153,0,0,0,0,48,-117,0,0},
	{63,-108,107,0,0,0,48,-82,82,0},
	{117,-117,0,0,0,0,90,-89,0,0},
	{117,-83,82,0,0,0,90,-63,63,0},
	{152,-64,0,0,0,0,117,-48,0,0},
	{152,-45,44,0,0,0,117,-34,34,0},
	{165,-1,0,0,0,0,127,0,0,0},
};
Gfx RCP_walker_F_walk0[]={
	gsSPLight((&light_walker_F_walk[0].l[0]),1),
	gsSPLight((&light_walker_F_walk[0].a),2),
	gsSPVertex(&vtx_walker_F_walk0[0],12,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,5,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(9,10,11,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk1[]={
	gsSPLight((&light_walker_F_walk[2].l[0]),1),
	gsSPLight((&light_walker_F_walk[2].a),2),
	gsSPVertex(&vtx_walker_F_walk1[0],3,0),
	gsSP1Triangle(0,1,2,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk2[]={
	gsSPLight((&light_walker_F_walk[2].l[0]),1),
	gsSPLight((&light_walker_F_walk[2].a),2),
	gsSPVertex(&vtx_walker_F_walk2[0],3,0),
	gsSP1Triangle(0,1,2,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk3[]={
	gsSPLight((&light_walker_F_walk[0].l[0]),1),
	gsSPLight((&light_walker_F_walk[0].a),2),
	gsSPVertex(&vtx_walker_F_walk3[0],12,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,5,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(9,10,11,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk4[]={
	gsSPLight((&light_walker_F_walk[2].l[0]),1),
	gsSPLight((&light_walker_F_walk[2].a),2),
	gsSPVertex(&vtx_walker_F_walk4[0],3,0),
	gsSP1Triangle(0,1,2,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk5[]={
	gsSPLight((&light_walker_F_walk[2].l[0]),1),
	gsSPLight((&light_walker_F_walk[2].a),2),
	gsSPVertex(&vtx_walker_F_walk5[0],3,0),
	gsSP1Triangle(0,1,2,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk6[]={
	gsSPLight((&light_walker_F_walk[2].l[0]),1),
	gsSPLight((&light_walker_F_walk[2].a),2),
	gsSPVertex(&vtx_walker_F_walk6[0],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_walker_F_walk6[16],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_walker_F_walk6[32],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_walker_F_walk6[48],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_walker_F_walk6[64],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_walker_F_walk6[80],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_walker_F_walk6[96],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_walker_F_walk6[112],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk7[]={
	gsSPLight((&light_walker_F_walk[2].l[0]),1),
	gsSPLight((&light_walker_F_walk[2].a),2),
	gsSPVertex(&vtx_walker_F_walk7[0],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,2,0),
	gsSP1Triangle(3,2,1,0),
	gsSP1Triangle(5,6,4,0),
	gsSP1Triangle(5,4,3,0),
	gsSP1Triangle(7,8,6,0),
	gsSP1Triangle(7,6,5,0),
	gsSP1Triangle(9,10,8,0),
	gsSP1Triangle(9,8,7,0),
	gsSP1Triangle(11,12,10,0),
	gsSP1Triangle(11,10,9,0),
	gsSP1Triangle(13,14,12,0),
	gsSP1Triangle(13,12,11,0),
	gsSP1Triangle(15,14,13,0),
	gsSPVertex(&vtx_walker_F_walk7[16],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,2,0),
	gsSP1Triangle(3,2,1,0),
	gsSP1Triangle(5,6,4,0),
	gsSP1Triangle(5,4,3,0),
	gsSP1Triangle(7,8,6,0),
	gsSP1Triangle(7,6,5,0),
	gsSP1Triangle(9,10,8,0),
	gsSP1Triangle(9,8,7,0),
	gsSP1Triangle(11,12,10,0),
	gsSP1Triangle(11,10,9,0),
	gsSP1Triangle(13,14,12,0),
	gsSP1Triangle(13,12,11,0),
	gsSP1Triangle(15,14,13,0),
	gsSPVertex(&vtx_walker_F_walk7[32],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,2,0),
	gsSP1Triangle(3,2,1,0),
	gsSP1Triangle(5,6,4,0),
	gsSP1Triangle(5,4,3,0),
	gsSP1Triangle(7,8,6,0),
	gsSP1Triangle(7,6,5,0),
	gsSP1Triangle(9,10,8,0),
	gsSP1Triangle(9,8,7,0),
	gsSP1Triangle(11,12,10,0),
	gsSP1Triangle(11,10,9,0),
	gsSP1Triangle(13,14,12,0),
	gsSP1Triangle(13,12,11,0),
	gsSP1Triangle(15,14,13,0),
	gsSPVertex(&vtx_walker_F_walk7[48],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,2,0),
	gsSP1Triangle(3,2,1,0),
	gsSP1Triangle(5,6,4,0),
	gsSP1Triangle(5,4,3,0),
	gsSP1Triangle(7,8,6,0),
	gsSP1Triangle(7,6,5,0),
	gsSP1Triangle(9,10,8,0),
	gsSP1Triangle(9,8,7,0),
	gsSP1Triangle(11,12,10,0),
	gsSP1Triangle(11,10,9,0),
	gsSP1Triangle(13,14,12,0),
	gsSP1Triangle(13,12,11,0),
	gsSP1Triangle(15,14,13,0),
	gsSPVertex(&vtx_walker_F_walk7[64],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,2,0),
	gsSP1Triangle(3,2,1,0),
	gsSP1Triangle(5,6,4,0),
	gsSP1Triangle(5,4,3,0),
	gsSP1Triangle(7,8,6,0),
	gsSP1Triangle(7,6,5,0),
	gsSP1Triangle(9,10,8,0),
	gsSP1Triangle(9,8,7,0),
	gsSP1Triangle(11,12,10,0),
	gsSP1Triangle(11,10,9,0),
	gsSP1Triangle(13,14,12,0),
	gsSP1Triangle(13,12,11,0),
	gsSP1Triangle(15,14,13,0),
	gsSPVertex(&vtx_walker_F_walk7[80],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,2,0),
	gsSP1Triangle(3,2,1,0),
	gsSP1Triangle(5,6,4,0),
	gsSP1Triangle(5,4,3,0),
	gsSP1Triangle(7,8,6,0),
	gsSP1Triangle(7,6,5,0),
	gsSP1Triangle(9,10,8,0),
	gsSP1Triangle(9,8,7,0),
	gsSP1Triangle(11,12,10,0),
	gsSP1Triangle(11,10,9,0),
	gsSP1Triangle(13,14,12,0),
	gsSP1Triangle(13,12,11,0),
	gsSP1Triangle(15,14,13,0),
	gsSPVertex(&vtx_walker_F_walk7[96],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,2,0),
	gsSP1Triangle(3,2,1,0),
	gsSP1Triangle(5,6,4,0),
	gsSP1Triangle(5,4,3,0),
	gsSP1Triangle(7,8,6,0),
	gsSP1Triangle(7,6,5,0),
	gsSP1Triangle(9,10,8,0),
	gsSP1Triangle(9,8,7,0),
	gsSP1Triangle(11,12,10,0),
	gsSP1Triangle(11,10,9,0),
	gsSP1Triangle(13,14,12,0),
	gsSP1Triangle(13,12,11,0),
	gsSP1Triangle(15,14,13,0),
	gsSPVertex(&vtx_walker_F_walk7[112],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,2,0),
	gsSP1Triangle(3,2,1,0),
	gsSP1Triangle(5,6,4,0),
	gsSP1Triangle(5,4,3,0),
	gsSP1Triangle(7,8,6,0),
	gsSP1Triangle(7,6,5,0),
	gsSP1Triangle(9,10,8,0),
	gsSP1Triangle(9,8,7,0),
	gsSP1Triangle(11,12,10,0),
	gsSP1Triangle(11,10,9,0),
	gsSP1Triangle(13,14,12,0),
	gsSP1Triangle(13,12,11,0),
	gsSP1Triangle(15,14,13,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk8[]={
	gsSPLight((&light_walker_F_walk[0].l[0]),1),
	gsSPLight((&light_walker_F_walk[0].a),2),
	gsSPVertex(&vtx_walker_F_walk8[0],12,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,5,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(9,10,11,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk9[]={
	gsSPLight((&light_walker_F_walk[2].l[0]),1),
	gsSPLight((&light_walker_F_walk[2].a),2),
	gsSPVertex(&vtx_walker_F_walk9[0],3,0),
	gsSP1Triangle(0,1,2,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk10[]={
	gsSPLight((&light_walker_F_walk[2].l[0]),1),
	gsSPLight((&light_walker_F_walk[2].a),2),
	gsSPVertex(&vtx_walker_F_walk10[0],3,0),
	gsSP1Triangle(0,1,2,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk11[]={
	gsSPLight((&light_walker_F_walk[0].l[0]),1),
	gsSPLight((&light_walker_F_walk[0].a),2),
	gsSPVertex(&vtx_walker_F_walk11[0],12,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(3,4,5,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(9,10,11,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk12[]={
	gsSPLight((&light_walker_F_walk[2].l[0]),1),
	gsSPLight((&light_walker_F_walk[2].a),2),
	gsSPVertex(&vtx_walker_F_walk12[0],3,0),
	gsSP1Triangle(0,1,2,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk13[]={
	gsSPLight((&light_walker_F_walk[2].l[0]),1),
	gsSPLight((&light_walker_F_walk[2].a),2),
	gsSPVertex(&vtx_walker_F_walk13[0],3,0),
	gsSP1Triangle(0,1,2,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk14[]={
	gsSPLight((&light_walker_F_walk[1].l[0]),1),
	gsSPLight((&light_walker_F_walk[1].a),2),
	gsSPVertex(&vtx_walker_F_walk14[0],6,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(0,2,3,0),
	gsSP1Triangle(4,5,1,0),
	gsSP1Triangle(4,1,0,0),
	gsSPEndDisplayList()
};
Gfx RCP_walker_F_walk15[]={
	gsSPLight((&light_walker_F_walk[0].l[0]),1),
	gsSPLight((&light_walker_F_walk[0].a),2),
	gsSPVertex(&vtx_walker_F_walk15[0],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_walker_F_walk15[16],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_walker_F_walk15[32],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_walker_F_walk15[48],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_walker_F_walk15[64],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_walker_F_walk15[80],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_walker_F_walk15[96],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPVertex(&vtx_walker_F_walk15[112],16,0),
	gsSP1Triangle(0,1,2,0),
	gsSP1Triangle(1,0,3,0),
	gsSP1Triangle(1,3,4,0),
	gsSP1Triangle(4,3,5,0),
	gsSP1Triangle(4,5,6,0),
	gsSP1Triangle(6,5,7,0),
	gsSP1Triangle(6,7,8,0),
	gsSP1Triangle(8,7,9,0),
	gsSP1Triangle(8,9,10,0),
	gsSP1Triangle(10,9,11,0),
	gsSP1Triangle(10,11,12,0),
	gsSP1Triangle(12,11,13,0),
	gsSP1Triangle(12,13,14,0),
	gsSP1Triangle(14,13,15,0),
	gsSPEndDisplayList()
};
Gfx light_sourcex[]={
	gsSPNumLights(NUMLIGHTS_1),
	gsSPEndDisplayList()
};