#ifndef INVBIN_H
#define INVBIN_H
#include <string>
class InvBin {
    private:
        std::string description;
        int qty;

    public:
        InvBin();
        InvBin(std::string, int);
        void setDescription(std::string);
        std::string getDescription() const;
        void setQty(int);
        int getQty() const;
};
#endif