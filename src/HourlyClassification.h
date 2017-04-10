#ifndef _HOURLYCLASSIFICATION_H_
#define _HOURLYCLASSIFICATION_H_

#include <vector>
#include "PaymentClassification.h"
#include "TimeCard.h"

class HourlyClassification : public PaymentClassification 
{
    public:
        HourlyClassification(double hourlyRate);
        virtual ~HourlyClassification();
        double calculatePay(Paycheck &pc) const override;
        double getHourlyRate() const { return itsHourlyRate; };
        void addTimeCard(TimeCard *tc);
        TimeCard *getTimeCard(Date date);
    private:
        double itsHourlyRate;
        std::vector<TimeCard *> itsTimeCards;
};

#endif