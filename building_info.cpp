#include "building_info.h"

Building_Info::Building_Info()
{

}

void Building_Info::Set_building_name(QString _name)
{
    Build_name=_name;
}

void Building_Info::Set_User_nmae(QString _name)
{
    User_name=_name;
}

void Building_Info::Set_Money(int _sale_money, int one_level_upgrade_money, int one_level_charge_money, int two_level_upgrade_money, int two_level_charge_money, int three_level_upgrade_money, int three_level_charge_money)
{
    Sale_money=_sale_money;
    One_level_upgrade_money=one_level_upgrade_money;
    One_level_charge_money=one_level_charge_money;

    Two_level_upgrade_money=two_level_upgrade_money;
    Two_level_charge_money=two_level_charge_money;

    Three_level_upgrade_money=three_level_upgrade_money;
    Three_level_charge_money=three_level_charge_money;

}

void Building_Info::Set_Grade(int _Grade)
{
    Building_grade=_Grade;
}

void Building_Info::Set_Force_money(int _force_sale_money)
{
    Force_sale_money=_force_sale_money;
}



