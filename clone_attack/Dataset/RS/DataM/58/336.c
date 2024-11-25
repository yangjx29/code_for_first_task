char yagxK1O9Y [(508 - 427)];
int FSvZ6tb;

int main () {
    int Xc7piL4mPD9l;
    int H4XoAfC1rnc;
    int vNzK1iue;
    int isMueE;
    int zY8R1Z;
    int uScZp2j;
    getchar ();
    cin >> isMueE;
    {
        H4XoAfC1rnc = 0;
        while (H4XoAfC1rnc < isMueE) {
            uScZp2j = 0;
            zY8R1Z = 0;
            cin.getline (yagxK1O9Y, 81);
            Xc7piL4mPD9l = strlen (yagxK1O9Y);
            if (yagxK1O9Y[0] == '_' || (yagxK1O9Y[0] >= 'a' && yagxK1O9Y[0] <= 'z') || (yagxK1O9Y[0] >= 'A' && yagxK1O9Y[0] <= 'Z'))
                zY8R1Z = (652 - 651);
            else
                zY8R1Z = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            {
                vNzK1iue = 0;
                while (vNzK1iue < Xc7piL4mPD9l) {
                    if (yagxK1O9Y[vNzK1iue] == '_' || (yagxK1O9Y[vNzK1iue] >= '0' && yagxK1O9Y[vNzK1iue] <= '9') || (yagxK1O9Y[vNzK1iue] >= 'a' && yagxK1O9Y[vNzK1iue] <= 'z') || (yagxK1O9Y[vNzK1iue] >= 'A' && yagxK1O9Y[vNzK1iue] <= 'Z'))
                        uScZp2j = (640 - 639);
                    else {
                        uScZp2j = 0;
                        break;
                    }
                    vNzK1iue = vNzK1iue + 1;
                };
            }
            H4XoAfC1rnc = H4XoAfC1rnc +1;
            if (uScZp2j && zY8R1Z == 1)
                FSvZ6tb = 1;
            else
                FSvZ6tb = 0;
            cout << FSvZ6tb << '\n';
        };
    }
    return 0;
}

