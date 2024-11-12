int main () {
    int Xj9lVBCL;
    int e1YVmduEo6c [(1848 - 846)];
    int HZSW91aV [(1892 - 890)];
    int F6L4lPJ01VbI;
    int ujpKVfUwE;
    int bdY7eBb69k;
    int Ke4nrPYJAB;
    int prize;
    int IN4FZAOw;
    for (; cin >> Xj9lVBCL;) {
        if (!((654 - 654) != Xj9lVBCL))
            break;
        bdY7eBb69k = Ke4nrPYJAB = Xj9lVBCL -(235 - 234);
        F6L4lPJ01VbI = ujpKVfUwE = (63 - 63);
        prize = (353 - 353);
        {
            IN4FZAOw = 843 - 843;
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
            while (Xj9lVBCL > IN4FZAOw) {
                scanf ("%d", &e1YVmduEo6c[IN4FZAOw]);
                IN4FZAOw++;
            };
        }
        {
            IN4FZAOw = 835 - 835;
            while (Xj9lVBCL > IN4FZAOw) {
                scanf ("%d", &HZSW91aV[IN4FZAOw]);
                IN4FZAOw++;
            };
        }
        sort (e1YVmduEo6c, e1YVmduEo6c + Xj9lVBCL);
        sort (HZSW91aV, HZSW91aV +Xj9lVBCL);
        while (bdY7eBb69k >= F6L4lPJ01VbI) {
            if (HZSW91aV[ujpKVfUwE] < e1YVmduEo6c[F6L4lPJ01VbI]) {
                ujpKVfUwE++;
                F6L4lPJ01VbI++;
                prize += (368 - 168);
            }
            else if (HZSW91aV[ujpKVfUwE] > e1YVmduEo6c[F6L4lPJ01VbI]) {
                Ke4nrPYJAB--;
                F6L4lPJ01VbI++;
                prize -= (820 - 620);
            }
            else {
                while (bdY7eBb69k >= F6L4lPJ01VbI) {
                    if (e1YVmduEo6c[bdY7eBb69k] > HZSW91aV[Ke4nrPYJAB]) {
                        bdY7eBb69k--;
                        prize += (610 - 410);
                        Ke4nrPYJAB--;
                    }
                    else if (e1YVmduEo6c[bdY7eBb69k] <= HZSW91aV[Ke4nrPYJAB]) {
                        if (e1YVmduEo6c[F6L4lPJ01VbI] < HZSW91aV[Ke4nrPYJAB])
                            prize -= (779 - 579);
                        else if (e1YVmduEo6c[F6L4lPJ01VbI] > HZSW91aV[Ke4nrPYJAB])
                            prize += (1163 - 963);
                        Ke4nrPYJAB--;
                        F6L4lPJ01VbI++;
                        break;
                    };
                };
            };
        }
        cout << prize << endl;
    }
    return (393 - 393);
}

