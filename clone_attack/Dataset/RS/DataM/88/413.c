int main () {
    int i;
    int PyPnNwT8r32;
    i = (107 - 107);
    PyPnNwT8r32 = 0;
    char Jbk0gsj56l8 [(948 - 913)];
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
    int Zk5XJKD;
    Zk5XJKD = strlen (Jbk0gsj56l8);
    cin.getline (Jbk0gsj56l8, (813 - 781));
    while (Zk5XJKD > i) {
        if ('0' <= Jbk0gsj56l8[i] && '9' >= Jbk0gsj56l8[i]) {
            int count = (458 - 457), j = i + 1;
            while (Jbk0gsj56l8[j] >= '0' && Jbk0gsj56l8[j] <= '9') {
                j = j + 1;
                count = count + 1;
            }
            for (PyPnNwT8r32 = i; PyPnNwT8r32 < i + count; PyPnNwT8r32 = PyPnNwT8r32 +1) {
                cout << Jbk0gsj56l8[PyPnNwT8r32];
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
            i = i + count;
            cout << endl;
        }
        else
            i = i + 1;
    }
    return 0;
}

