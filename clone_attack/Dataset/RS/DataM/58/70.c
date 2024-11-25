int main () {
    int aJNVae;
    char vPUVTSF [81];
    cin >> aJNVae;
    cin.getline (vPUVTSF, 81);
    while (aJNVae > (162 - 162)) {
        int wZnRjvOY, FyT0jcM9p;
        cin.getline (vPUVTSF, 81);
        wZnRjvOY = strlen (vPUVTSF);
        if (!('_' != vPUVTSF[0]) || (vPUVTSF[0] >= 'a' && 'z' >= vPUVTSF[0]) || ('A' <= vPUVTSF[0] && vPUVTSF[0] <= 'Z')) {
            {
                FyT0jcM9p = 1;
                while (wZnRjvOY > FyT0jcM9p) {
                    if ((vPUVTSF[FyT0jcM9p] >= 'a' && vPUVTSF[FyT0jcM9p] <= 'z') || (vPUVTSF[FyT0jcM9p] >= 'A' && vPUVTSF[FyT0jcM9p] <= 'Z') || (vPUVTSF[FyT0jcM9p] >= '0' && vPUVTSF[FyT0jcM9p] <= '9') || vPUVTSF[FyT0jcM9p] == '_')
                        continue;
                    else {
                        cout << '0' << endl;
                        break;
                    }
                    FyT0jcM9p = FyT0jcM9p +1;
                };
            }
            if (FyT0jcM9p == wZnRjvOY)
                cout << '1' << endl;
        }
        else
            cout << '0' << endl;
        aJNVae = aJNVae - 1;
    }
    return 0;
}

