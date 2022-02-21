class ParkingSystem {
    int car[3];
public:
    ParkingSystem(int big, int medium, int small) {
        car[0] = big;
        car[1] = medium;
        car[2] = small;
    }
    
    bool addCar(int carType) {
        if(car[carType-1]-- > 0)
            return true;
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */