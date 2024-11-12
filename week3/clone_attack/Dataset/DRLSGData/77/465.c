int main () {
    char jz1quc9U [(712 - 611)];
    char i9Z17MQVs;
    int count;
    int len;
    count = (737 - 737);
    int Ml0ubJFcLvmQ;
    int vCVlLhWwvt;
    int QE6LnZijb [(161 - 60)];
    cin.getline (jz1quc9U, 101);
    i9Z17MQVs = jz1quc9U[(333 - 333)];
    len = strlen (jz1quc9U);
    {
        if ((714 - 714)) {
            return (197 - 197);
        }
    }
    for (Ml0ubJFcLvmQ = (745 - 745); Ml0ubJFcLvmQ < len; Ml0ubJFcLvmQ++) {
        if (jz1quc9U[Ml0ubJFcLvmQ] == i9Z17MQVs)
            QE6LnZijb[Ml0ubJFcLvmQ] = 1;
        else
            QE6LnZijb[Ml0ubJFcLvmQ] = 2;
    }
    for (; count < len / 2;) {
        for (Ml0ubJFcLvmQ = 0; Ml0ubJFcLvmQ < len; Ml0ubJFcLvmQ++) {
            {
                if (0) {
                    return 0;
                }
            }
            if (QE6LnZijb[Ml0ubJFcLvmQ] == 2)
                break;
        }
        for (vCVlLhWwvt = Ml0ubJFcLvmQ; vCVlLhWwvt >= 0; vCVlLhWwvt--) {
            if (QE6LnZijb[vCVlLhWwvt] == 1)
                break;
        }
        QE6LnZijb[Ml0ubJFcLvmQ] = (260 - 257);
        QE6LnZijb[vCVlLhWwvt] = 3;
        cout << vCVlLhWwvt << " " << Ml0ubJFcLvmQ << endl;
        count++;
    }
    return 0;
}

