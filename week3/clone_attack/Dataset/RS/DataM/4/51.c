int main () {
    int qKdwmeN [100] [100];
    int ZSxgihPMbTQ;
    int PljISu6o;
    cin >> ZSxgihPMbTQ >> PljISu6o;
    {
        int iW6QacMkDT;
        iW6QacMkDT = 0;
        while (ZSxgihPMbTQ > iW6QacMkDT) {
            for (int qdcpGJqw = 0;
            PljISu6o > qdcpGJqw; qdcpGJqw++) {
                cin >> qKdwmeN[iW6QacMkDT][qdcpGJqw];
            }
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
            iW6QacMkDT++;
        };
    }
    {
        int iW6QacMkDT = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (iW6QacMkDT < PljISu6o) {
            int LDjvbG;
            LDjvbG = iW6QacMkDT;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            int y7fTQu = 0;
            while (y7fTQu <= ZSxgihPMbTQ -1 && 0 <= LDjvbG) {
                cout << qKdwmeN[y7fTQu][LDjvbG] << endl;
                LDjvbG = LDjvbG -1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                y7fTQu = y7fTQu + 1;
            }
            iW6QacMkDT++;
        };
    }
    for (int iW6QacMkDT = 1;
    iW6QacMkDT < ZSxgihPMbTQ; iW6QacMkDT = iW6QacMkDT + 1) {
        int LDjvbG = PljISu6o -1;
        int y7fTQu = iW6QacMkDT;
        while (y7fTQu <= ZSxgihPMbTQ -1 && LDjvbG >= 0) {
            cout << qKdwmeN[y7fTQu][LDjvbG] << endl;
            LDjvbG = LDjvbG -1;
            y7fTQu = y7fTQu + 1;
        };
    }
    return 0;
}

