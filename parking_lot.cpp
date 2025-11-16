class Spot {
  private:
    int spot_num;
    bool is_occupy;
    Vehicle *parked_vehicle;

  public:
    Spot(const bool &oc = false) : is_occupy(oc) {};

    double calculate_price() {
      //implement price calculation with time on ticket
    }

    void park_in(Vehicle *v) {
      parked_vehicle = v;
      is_occupy = true;
    }

    void park_out() {
      parked_vehicle = NULL;
      is_occupy = false;
    }

    void isEmpty() {
      return !is_occupy;
    }

    string getCarNum() {
      return parked_vehicle->car_number;
    }
    
    int getSpotNum() {
      return spot_num;
    }
}

class Level {
  private:
    int level_id;
    vector<Spot> parking_spot;
  
  public:
    int park_in(Vehicle *v) {
      for(int i = 0; i < parking_spot.size(); ++i) {
        if(parking_spot[i].isEmpty) {
          parking_spot[i].park_in(v);
          return i;
        }
      }
      return -1;
    }

    double park_out(int index) {
      if(parking_spot[index].is_occupy {
        parking_spot[index].park_out();
        return parking_spot[index].calculatePrice();
      }
      return -1;
    }

    bool isStillEmpty() {
      for(auto &s : parking_spot) {
        if(parking_spot.isEmpty() return true;
        return false;
      }
    }
}
      

class Lot {
  private:
    vector<Level> lv_list;
  
  public:
    pair<int, int> parkVehicle(Vehicle *v) {
      for(int i = 0; i < lv_list.size(); ++i) {
        if(lv_list[i].isStillEmpty() {
          return {lv_list, lv_list[i].park_in(v)}; //return lv_num and spot_num
        }
        return -1;
      }
    }

    int unparkVehicle(int lv, int spot_num) {
      if(lv_list[lv][spot_num].is_occupy() {
        return lv_list[lv].park_out(spot_num); //return the parking price
      }
      return -1; // car not found
    }
      
}

class Ticket {
  private:
    string start_time;
  
  public:
    Ticket(const string time) : start_time(time) {}
    
    string getTime() {
      return start_time;
    }
}

class Vehicle {
  private:
    string car_number;
    Ticket t;
  
  public:
    Vehicle(string num, string time) : car_number(num), t(time) {}
}
  
