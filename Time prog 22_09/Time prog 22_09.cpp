#include <iostream>
#include <string>

class Do_things
{
public:
    void Set_First_CAPS_To_EveryThing()
    {
        std::string sentence;
        std::cout << "Hello\n ";
        std::getline(std::cin, sentence);
        for (int i = 0; i < sentence.size(); i++)
        {
            if (i == 0)
            {
                sentence[0] = toupper(sentence[0]);
            }
            else if (sentence[i - 1] == ' ')
            {
                sentence[i] = toupper(sentence[i]);
            }
        }
        system("cls");
        std::cout << "Here is your sentence all first letter caps\n";
        std::cout << sentence << "\n\n\n\n";
    }

    void Set_Text_Proper()
    {
        std::string sentence;
        std::cout << "Please type something cool, like a sentence.\n";
        std::getline(std::cin, sentence);
        for (int i = 0; i < sentence.size(); i++)
        {
            if (i == 0 || (sentence[i] == 'i' && sentence[i-1] == ' ' && sentence[i+1] == ' ') || (sentence[i - 1] == ' ' && sentence[i-2] == '.' ))
            {
                switch (sentence[i])
                {
                case 'ø':
                    sentence[i] = 'Ø';
                    break;
                case 'æ':
                    sentence[i] = 'Æ';
                    break;
                case 'å':
                    sentence[i] = 'Å';
                    break;
                default:
                    sentence[i] = toupper(sentence[i]);
                    break;
                }
            }
        }
        system("cls");
        std::cout << "Here is your sentence writen in a propper way\n";
        std::cout << sentence << "\n\n\n\n";
    }

private:

};

int main()
{
    Do_things funtions;
    funtions.Set_Text_Proper();
    //funtions.Set_First_CAPS_To_EveryThing();
    return 0;
}