#include <iostream>
using namespace std;

class Movie{
private:
    string rating;
public:
    string title;
    string director;
    Movie(string title1, string director1,string rating1){
        title=title1;
        director=director1;
        setRating(rating1);
    }
    void setRating(string aRating){
        if (aRating =="G" || aRating == "PG" || aRating == "PG-13"||aRating =="R"||aRating=="NR") {
            rating = aRating;
        } else rating= "NR";
    }
    void printAll(){
        cout<<"Tittle: "<<title<<endl;
        cout<<"Director: "<<director<<endl;
        cout<<"Rating: "<<rating<<endl;
    }
    string getRating(){
        return rating;
    }
};
int main() {
    Movie avenger ("The Avenger","Joss Whedon","PG13");
    avenger.printAll();
    return 0;
}
