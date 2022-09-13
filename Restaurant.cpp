//
// Created by hloi on 9/11/2022.
//

#include "Restaurant.h"

Restaurant::Restaurant() {
    tables.resize(10);
    menu.resize(20);
    prices.resize(10);
    name = "nobody";
    chefs = 5;
    waiters = 10;
    hours = 8;

}

Restaurant::Restaurant(const vector<int> &tables, const string &name, const string &hours, int chefs, int waiters,
                       const vector<string> &menu, const vector<double> &prices) : tables(tables), name(name),
                                                                                   hours(hours), chefs(chefs),
                                                                                   waiters(waiters), menu(menu),
                                                                                   prices(prices) {

}

const vector<int> &Restaurant::getTables() const {
    return tables;
}

void Restaurant::setTables(const vector<int> &tables) {
    Restaurant::tables = tables;
}

const string &Restaurant::getName() const {
    return name;
}

void Restaurant::setName(const string &name) {
    Restaurant::name = name;
}

const string &Restaurant::getHours() const {
    return hours;
}

void Restaurant::setHours(const string &hours) {
    Restaurant::hours = hours;
}

int Restaurant::getChefs() const {
    return chefs;
}

void Restaurant::setChefs(int chefs) {
    Restaurant::chefs = chefs;
}

int Restaurant::getWaiters() const {
    return waiters;
}

void Restaurant::setWaiters(int waiters) {
    Restaurant::waiters = waiters;
}

const vector<string> &Restaurant::getMenu() const {
    return menu;
}

void Restaurant::setMenu(const vector<string> &menu) {
    Restaurant::menu = menu;
}

const vector<double> &Restaurant::getPrices() const {
    return prices;
}

void Restaurant::setPrices(const vector<double> &prices) {
    Restaurant::prices = prices;
}
