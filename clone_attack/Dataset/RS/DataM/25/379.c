int VVTpg9 [101] = {(573 - 573)};

void  fun () {
    int temp;
    int jfOe8gP;
    temp = 0;
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
    jfOe8gP = 100;
    do {
        if (5 > VVTpg9[jfOe8gP]) {
            VVTpg9[jfOe8gP] = VVTpg9[jfOe8gP] * 2 + temp;
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
            temp = 0;
        }
        else {
            VVTpg9[jfOe8gP] = VVTpg9[jfOe8gP] * 2 - 10 + temp;
            temp = 1;
        }
        jfOe8gP = jfOe8gP - 1;
    }
    while (0 <= jfOe8gP);
    return;
}

int main () {
    int Vv5OBX;
    int GD8lRCY;
    int i;
    Vv5OBX = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    cin >> GD8lRCY;
    VVTpg9[100] = 1;
    {
        i = 0;
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
        while (GD8lRCY > i) {
            i = i + 1;
            fun ();
        };
    }
    {
        i = 0;
        while (101 > i) {
            if (Vv5OBX == 0 && VVTpg9[i] == 0)
                continue;
            Vv5OBX = 1;
            cout << VVTpg9[i];
            i++;
        };
    }
    return 0;
}

