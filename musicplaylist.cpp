#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string songs;
    string artists;
    int option;
    int slotNumber;
    string songName;
    int i;
    
    while (true) {
        cout << "\nWelcome to Playlist Manager.\n";
        cout << "Menu:\n";
        cout << "1. Add a song\n";
        cout << "2. Play a song\n";
        cout << "3. Remove a song\n";
        cout << "4. View playlist status\n";
        cout << "5. Exit\n";
        
        cin >> option;
        
        switch(option)
        {
            case 1:
            {
                cout << "You chose to add a song.\n";
                cout << "Enter slot number 1-3: ";
                cin >> slotNumber;
               

                cout << "\nEnter song name: ";
                cin >> songs;
                
                cout << "\nEnter artist: ";
                cin >> artists;
                ofstream file("filename.txt", ios::app);
                file << slotNumber << ", " << songs << ", " << artists << endl;
                file.close();
                
                cout << "\nSong added.\n";
               
            break;
            }
         
            case 2:
            {
                cout << "\nYou chose to play a song.\n";
                cout << "\nEnter song name: ";
                cin >> songName;
                ifstream file("filename.txt");
                string line;
                
                
                bool songfound = false;
                
                while (getline(file, line))
                {
                    int pos1 = line.find(',');
                    int pos2 = line.find(',' , pos1+1);
                    string search = line.substr(0,pos1);
                    string artistsearch = line.substr(pos1 + 1, pos2 - pos1-1);
                }
               /* 
                for (i = 0; i < 3; i++) {
                    if (songs[i] == songName) {
                        songfound = true;
                        cout << "\nNow Playing " << songs[i] << " by " << artists[i]<< "\n";
                        break;
                    }
                  
                }
                if (!songfound) 
                {
                cout << "Song not found.";
                }
              */  
            break; 
            }
            
            case 3:
            {
                cout << "You chose to remove a song.\n";
                cout << "Enter song name: \n";
                cin >> songName;
            /*
            for (int i = 0; i<3; i++) 
            {
                if (songs[i]==songName) 
                {
                    songs[i]="";
                    cout << "Song is removed.\n";
                    
            break;
           }
           
           else 
           {
               cout << "Song not found.";
           }
       } */
       break;
            }
            
            case 4:
            {
                 cout << "\nYou chose to view playlist status.\n";
            /*
            for (int i = 0; i < 3; i++)
                {
                    cout << "Slot " << i + 1 <<": ";
                    if (songs[i] == "")
                    {
                        cout << "Empty\n";
                    }
                    else
                    {
                        cout << "Occupied by "<< songs[i] << "\n";
                    }
                } */
                break;
                
            case 5:
            {
                cout << "Exiting program...\n";
                return 0;
        
                default: 
                cout <<"Invalid\n";
            }
        
        
            }
        
        }
    }
    
    return 0;
}
