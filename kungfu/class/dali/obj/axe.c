// axe.c 板斧

#include <weapon.h>
inherit AXE;

void create()
{
	set_name("板斧", ({ "ban fu", "axe", "fu" }));
	// modified the weight from 50000 to 5000
	// as 50000 is too heavy for player to carry.
	// 50000 will trigger a bug for player to get nothing by paying
	set_weight(5000);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "柄");
		set("long", "这是一柄沉重的板斧。\n");
		set("value", 100);
		set("material", "steel");
		set("wield_msg", "$N「忽」的一声抽出一柄$n握在手中。\n");
		set("unwield_msg", "$N将手中的$n插回腰后。\n");
	}
	init_axe(25);
	setup();
	
}
