#ifndef _UNIONAFFILIATION_H_
#define _UNIONAFFILIATION_H_ 

#include <vector>
#include "Affiliation.h"
#include "Date.h"
#include "ServiceCharge.h"

class UnionAffiliation : public Affiliation
{
    public:
        UnionAffiliation(int memberId, double dues);
        virtual ~UnionAffiliation();
        int getMemberId() const { return itsMemberId; };
        double getDues() const { return itsDues; };
        void addServiceCharge(Date date, double charge);
        ServiceCharge *getServiceCharge(Date date);
    private:
        int itsMemberId;
        double itsDues;
        std::vector<ServiceCharge *> itsServiceCharges;
};

#endif
