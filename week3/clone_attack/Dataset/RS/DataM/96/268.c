int main () {
    char RCp5soY [(833 - 728)];
    int bhVmdCJP0zt;
    int IN5yBXx;
    int hcawbp;
    int GOMc6Ly4n;
    int SCNU4pHP;
    int g6YyiU [105];
    bhVmdCJP0zt = strlen (RCp5soY);
    IN5yBXx = (773 - 773);
    hcawbp = (156 - 156);
    GOMc6Ly4n = (633 - 633);
    SCNU4pHP = (575 - 575);
    cin >> RCp5soY;
    {
        int UguFVrEQP = (208 - 208);
        while (!('\0' == RCp5soY[UguFVrEQP])) {
            IN5yBXx += RCp5soY[UguFVrEQP] - '0';
            if (13 <= IN5yBXx) {
                g6YyiU[hcawbp++] = IN5yBXx / 13;
                SCNU4pHP = 1;
                if (!('\0' == RCp5soY[UguFVrEQP +1]))
                    IN5yBXx = (IN5yBXx % 13) * 10;
                else
                    IN5yBXx = IN5yBXx % 13;
            }
            else if (!('\0' == RCp5soY[UguFVrEQP +1])) {
                IN5yBXx = IN5yBXx *(10);
                g6YyiU[hcawbp++] = 0;
            }
            else
                g6YyiU[hcawbp++] = 0;
            UguFVrEQP++;
        };
    }
    if (SCNU4pHP == 0)
        cout << 0 << endl << IN5yBXx << endl;
    else {
        for (int UguFVrEQP = 0;
        UguFVrEQP < hcawbp; UguFVrEQP++) {
            if (GOMc6Ly4n == 0 && g6YyiU[UguFVrEQP] == 0)
                ;
            else {
                GOMc6Ly4n = 1;
                cout << g6YyiU[UguFVrEQP];
            };
        }
        cout << endl;
        cout << IN5yBXx;
    }
    return 0;
}

