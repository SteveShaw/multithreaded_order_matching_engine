#ifndef _CENTRAL_ORDER_BOOK_VISITOR_
#define _CENTRAL_ORDER_BOOK_VISITOR_

#include <string>
#include <sstream>
#include <iostream>

#include "order.h"
#include <utility/visitor.hpp>

namespace order_matcher
{
    
class CentralOrderBookVisitor : public utility::Visitor<Order>
{
    public:
        void visit(Order& element) override
        {
            m_orders << element << std::endl;
        }

        std::string toString() const
        { 
            return m_orders.str();
        }

    private:
        std::stringstream m_orders;
};

}// namespace

#endif