//
//  Man.cpp
//  DynamicBinding
//
//  Created by Michael Raimi on 2/11/14.
//  Copyright (c) 2014 Michael Raimi. All rights reserved.
//

#include "Man.h"
#include <string>

class Man {
public:
    Man(const std::string &n = "John Doe",
        const std::string &g = "Male"):
            name(n),
            gender(g){}
    
    std::string getName() const {return name;};
    
    virtual std::string getGender(void){return gender;};
    virtual ~Man(){}
    
    
private:
    std::string name;
protected:
    std::string gender;
};
