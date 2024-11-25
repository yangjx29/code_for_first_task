int main () {
    int o91Jle;
    int EXSck5u6xae;
    char GKzy0lGp9YI [100] [21];
    cin >> o91Jle;
    cin.get ();
    {
        int LGUAsTmw;
        LGUAsTmw = (651 - 651);
        while (LGUAsTmw < o91Jle) {
            cin >> GKzy0lGp9YI[LGUAsTmw];
            LGUAsTmw = LGUAsTmw +1;
        };
    }
    for (int LGUAsTmw = (960 - 960);
    LGUAsTmw < o91Jle; LGUAsTmw = LGUAsTmw +1) {
        int loL8MdZQTIq = (368 - 368);
        if (!((GKzy0lGp9YI[LGUAsTmw][0] >= 'a' && GKzy0lGp9YI[LGUAsTmw][0] <= 'z') || (GKzy0lGp9YI[LGUAsTmw][0] >= 'A' && 'Z' >= GKzy0lGp9YI[LGUAsTmw][0]) || GKzy0lGp9YI[LGUAsTmw][0] == '_')) {
            cout << "no" << endl;
            continue;
        }
        else {
            EXSck5u6xae = strlen (GKzy0lGp9YI[LGUAsTmw]);
            for (int kCfikKY4FNy5 = 1;
            kCfikKY4FNy5 < EXSck5u6xae; kCfikKY4FNy5 = kCfikKY4FNy5 + 1) {
                if ((GKzy0lGp9YI[LGUAsTmw][kCfikKY4FNy5] >= 'a' && GKzy0lGp9YI[LGUAsTmw][kCfikKY4FNy5] <= 'z') || (GKzy0lGp9YI[LGUAsTmw][kCfikKY4FNy5] >= 'A' && GKzy0lGp9YI[LGUAsTmw][kCfikKY4FNy5] <= 'Z') || (GKzy0lGp9YI[LGUAsTmw][kCfikKY4FNy5] >= '0' && GKzy0lGp9YI[LGUAsTmw][kCfikKY4FNy5] <= '9') || GKzy0lGp9YI[LGUAsTmw][kCfikKY4FNy5] == '_')
                    continue;
                else {
                    loL8MdZQTIq = 1;
                    cout << "no" << endl;
                    break;
                };
            }
            if (loL8MdZQTIq == 0)
                cout << "yes" << endl;
        };
    }
    return 0;
}

