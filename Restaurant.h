//
// Created by hloi on 9/11/2022.
//

#ifndef CSC109CH07RESTAURANT_RESTAURANT_H
#define CSC109CH07RESTAURANT_RESTAURANT_H
#include <vector>
#include <string>

using std::vector;
using std::string;


class Restaurant {
public:
    Restaurant();
    Restaurant(const vector<int> &tables, const string &name, const string &hours, int chefs, int waiters,
               const vector<string> &menu, const vector<double> &prices);
private:
    vector<int> tables;
    string name;
    string hours;
    int chefs;
    int waiters;
    vector<string> menu;
public:
    const vector<int> &getTables() const;

    void setTables(const vector<int> &tables);

    const string &getName() const;

    void setName(const string &name);

    const string &getHours() const;

    void setHours(const string &hours);

    int getChefs() const;

    void setChefs(int chefs);

    int getWaiters() const;

    void setWaiters(int waiters);

    const vector<string> &getMenu() const;

    void setMenu(const vector<string> &menu);

    const vector<double> &getPrices() const;

    void setPrices(const vector<double> &prices);

private:
    vector<double> prices;


};


#endif //CSC109CH07RESTAURANT_RESTAURANT_H
