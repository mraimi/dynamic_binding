//
//  Woman.cpp
//  DynamicBinding
//
//  Created by Michael Raimi on 2/11/14.
//  Copyright (c) 2014 Michael Raimi. All rights reserved.
//

#include "Woman.h"
#include <string>

class Woman {
public:
    Woman(const std::string &n = "Jane Doe",
        const std::string &g = "Female"):
            name(n),
            gender(g){}
    
    std::string getName() const {return name;};
    
    virtual std::string getGender(void){return gender;};
    virtual ~Woman(){}
    
    
private:
    std::string name;
protected:
    std::string gender;
};