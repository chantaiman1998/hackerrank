#include <iostream>
#include <vector>

using namespace std;
class HotelRoom
{
  public:
      HotelRoom(int bedrooms, int bathrooms)
      : bedrooms_(bedrooms), bathrooms_(bathrooms) {}
      
      int get_price()
      {
        return 50*bedrooms_ + 100*bathrooms_;
      }
  private:
      int bedrooms_;
      int bathrooms_;
};

class HotelApartment : public HotelRoom
{
    // solution start
    /*
    other solution
        HotelApartment(int bedrooms, int bathrooms)
        : HotelRoom(bedrooms, bathrooms) {}    
    */
    public:
        HotelApartment(int bedrooms, int bathrooms)
        : HotelRoom(bedrooms + 2, bathrooms) {}
    // end
    int get_price()
    {
        return HotelRoom::get_price() + 100;
    }
};

// test method here
int main()
{
  int n;
  cin >> n;
  vector<Hotelroom*> rooms;
  for(int i = 0; i < n; i++)
  {
     string room_type;
     int bedrooms;
     int bathrooms;
     cin >> room_type >> bedrooms >> bathrooms;
     if(room_type == "standard")
     {
        rooms.push_back(new HotelRoom(bedrooms, bathrooms); 
     }
     else
     {
        rooms.push_back(new HotelApartment(bedrooms, bathrooms);     
     }
  }
                        
  int total_profit = 0;
  for (auto room : rooms)
  {
    total_profit += room->get_price();
  }
  cout << total_profit << endl;
  for(auto room : rooms)
  {
    delete rooms;
  }
  rooms.clear()
  return 0;
}
