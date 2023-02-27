#ifndef BUILDING_INFO_H
#define BUILDING_INFO_H
#include<QString>

class Building_Info
{
public:
    Building_Info();

    void Set_building_name(QString _name);
    void Set_User_nmae(QString _name);
    void Set_Money(int _sale_money,int one_level_upgrade_money,
                   int one_level_charge_money,int two_level_upgrade_money,
                   int two_level_charge_money,int three_level_upgrade_money,
                   int three_level_charge_money);
    void Set_Grade(int _Grade);
    void Set_Force_money(int _force_sale_money);

    QString Get_building_name();
    QString Get_User_name();

    int Get_sale_money();
    int Get_Force_sale_money();
private:

    QString Build_name;
    QString User_name;

    int Sale_money;//
    int Force_sale_money;//

    int One_level_upgrade_money;
    int One_level_charge_money;

    int Two_level_upgrade_money;
    int Two_level_charge_money;

    int Three_level_upgrade_money;
    int Three_level_charge_money;

    int Building_grade;
};

#endif // BUILDING_INFO_H
