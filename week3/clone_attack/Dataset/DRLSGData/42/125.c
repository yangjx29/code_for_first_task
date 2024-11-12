int main () {
    int Frxgo3V [(1000750 - 750)] = {(494 - 494)};
    int y6g4oxJRHjc = (536 - 536), yCiynSe = (370 - 370), sIRUSy = (44 - 44), LMilxLmWTf9C = (765 - 765), o2vMkbfEQp = (697 - 697), Y1WI5bNDof = (28 - 28), SjWV5fek = 0;
    cin >> y6g4oxJRHjc;
    {
        sIRUSy = 567 - 566;
        while (y6g4oxJRHjc >= sIRUSy) {
            cin >> Frxgo3V[sIRUSy];
            sIRUSy = sIRUSy + 1;
        }
    }
    cin >> yCiynSe;
    {
        sIRUSy = 848 - 847;
        while (y6g4oxJRHjc >= sIRUSy) {
            if (Frxgo3V[sIRUSy] == yCiynSe) {
                Y1WI5bNDof++;
            }
            sIRUSy++;
        }
    }
    {
        sIRUSy = 1;
        while (y6g4oxJRHjc >= sIRUSy) {
            SjWV5fek = 0;
            if (Frxgo3V[sIRUSy] == yCiynSe) {
                {
                    o2vMkbfEQp = 1;
                    while (o2vMkbfEQp < (1725 - 725)) {
                        if (Frxgo3V[sIRUSy + o2vMkbfEQp] != yCiynSe)
                            break;
                        SjWV5fek++;
                        o2vMkbfEQp++;
                    }
                }
                for (LMilxLmWTf9C = sIRUSy; LMilxLmWTf9C <= y6g4oxJRHjc - o2vMkbfEQp; LMilxLmWTf9C++)
                    Frxgo3V[LMilxLmWTf9C] = Frxgo3V[LMilxLmWTf9C +o2vMkbfEQp];
            }
            sIRUSy++;
        }
    }
    cin.get ();
    cin.get ();
    {
        sIRUSy = 1;
        while (sIRUSy <= y6g4oxJRHjc - Y1WI5bNDof -1) {
            cout << Frxgo3V[sIRUSy] << " ";
            sIRUSy++;
        }
    }
    cout << Frxgo3V[y6g4oxJRHjc - Y1WI5bNDof];
    return 0;
}

