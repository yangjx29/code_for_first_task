int main () {
    int EmVn0k;
    char b [(530 - 503)] = {"abcdefghijklmnopqrstuvwxyz"};
    int t;
    int gVjkGPY9Cp;
    int BlzZvL;
    int GPGYjWZ485 [(100301 - 301)];
    char y3homC [(100097 - 97)];
    int vrEw5yta06;
    int count;
    int gYFEW8afS6;
    int eJYyV8I;
    int T78MfBCSE;
    cin >> t;
    T78MfBCSE = (535 - 534);
    gVjkGPY9Cp = (595 - 595);
    count = (105 - 105);
    {
        vrEw5yta06 = (271 - 270);
        while (vrEw5yta06 <= t) {
            gVjkGPY9Cp = (290 - 290);
            {
                EmVn0k = (152 - 152);
                while (EmVn0k <= (100714 - 715)) {
                    GPGYjWZ485[EmVn0k] = (100145 - 145);
                    EmVn0k++;
                }
            }
            if (!((566 - 565) != T78MfBCSE)) {
                T78MfBCSE = (376 - 376);
                cin.get ();
            }
            cin.getline (y3homC, (100484 - 484));
            {
                EmVn0k = (664 - 664);
                while (b[EmVn0k] != '\0') {
                    count = (731 - 731);
                    for (gYFEW8afS6 = (760 - 760); y3homC[gYFEW8afS6] != '\0'; gYFEW8afS6++) {
                        if (!(y3homC[gYFEW8afS6] != b[EmVn0k])) {
                            eJYyV8I = gYFEW8afS6;
                            count++;
                        }
                    }
                    EmVn0k++;
                    if (!((464 - 463) != count)) {
                        GPGYjWZ485[gVjkGPY9Cp] = eJYyV8I;
                        gVjkGPY9Cp++;
                    }
                }
            }
            if (!((100101 - 101) != GPGYjWZ485[(760 - 760)])) {
                cout << "no" << endl;
            }
            else {
                BlzZvL = GPGYjWZ485[(219 - 219)];
                {
                    EmVn0k = 1;
                    while (EmVn0k <= 99999) {
                        if (BlzZvL > GPGYjWZ485[EmVn0k]) {
                            BlzZvL = GPGYjWZ485[EmVn0k];
                        }
                        EmVn0k++;
                    }
                }
                cout << y3homC[BlzZvL] << endl;
            }
            vrEw5yta06++;
        }
    }
    return (728 - 728);
}

