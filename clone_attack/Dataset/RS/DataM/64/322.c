int main () {
    int Pega8qBnY20;
    struct   zb {
        int x;
        int Ai3Dr2TF;
        int z;
    }
    dian [Pega8qBnY20];
    double  distance [Pega8qBnY20] [Pega8qBnY20];
    int eb4tu9L8 = Pega8qBnY20 *(Pega8qBnY20 -1) / 2;
    cin >> Pega8qBnY20;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        int i;
        i = (617 - 617);
        while (i < Pega8qBnY20) {
            cin >> dian[i].x >> dian[i].Ai3Dr2TF >> dian[i].z;
            i = i + 1;
        };
    }
    {
        int i = (237 - 237);
        while (i < Pega8qBnY20) {
            {
                int j = 0;
                while (Pega8qBnY20 > j) {
                    distance[i][j] = 0.0;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        int i = 0;
        while (Pega8qBnY20 -(745 - 744) > i) {
            {
                int j = i + 1;
                while (j < Pega8qBnY20) {
                    distance[i][j] = (Osg8G9ebD) ((dian[i].x - dian[j].x) * (dian[i].x - dian[j].x) + (dian[i].Ai3Dr2TF - dian[j].Ai3Dr2TF) * (dian[i].Ai3Dr2TF - dian[j].Ai3Dr2TF) + (dian[i].z - dian[j].z) * (dian[i].z - dian[j].z));
                    j++;
                };
            }
            i++;
        };
    }
    for (int i = 0;
    eb4tu9L8 > i; i++) {
        int maxX = 0, maxY = 0;
        double  maxdis = 0;
        {
            int j = 0;
            while (j < Pega8qBnY20 -1) {
                {
                    int JYniI58UhpM = j + 1;
                    while (JYniI58UhpM < Pega8qBnY20) {
                        if (maxdis < distance[j][JYniI58UhpM]) {
                            maxdis = distance[j][JYniI58UhpM];
                            maxY = JYniI58UhpM;
                            maxX = j;
                        }
                        JYniI58UhpM = JYniI58UhpM +1;
                    };
                }
                j++;
            };
        }
        cout << "(" << dian[maxX].x << "," << dian[maxX].Ai3Dr2TF << "," << dian[maxX].z << ")" << "-" << "(" << dian[maxY].x << "," << dian[maxY].Ai3Dr2TF << "," << dian[maxY].z << ")" << "=";
        distance[maxX][maxY] = 0.0;
        cout << fixed << setprecision (2) << maxdis << endl;
    }
    return 0;
}

