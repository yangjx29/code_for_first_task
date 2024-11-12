int main () {
    int CDzLvxRnU;
    int skuxeV5HhCs;
    int yXlgbaIz;
    int iSgcTnVlqyF;
    char eYwFDWbx [501];
    cin >> eYwFDWbx;
    {
        CDzLvxRnU = 1;
        while (!('\0' == eYwFDWbx[CDzLvxRnU])) {
            {
                skuxeV5HhCs = 0;
                while (eYwFDWbx[skuxeV5HhCs] != '\0') {
                    iSgcTnVlqyF = 1;
                    {
                        yXlgbaIz = 0;
                        while (skuxeV5HhCs + yXlgbaIz <= skuxeV5HhCs + CDzLvxRnU -yXlgbaIz) {
                            if (eYwFDWbx[skuxeV5HhCs + CDzLvxRnU -yXlgbaIz] != eYwFDWbx[skuxeV5HhCs + yXlgbaIz])
                                iSgcTnVlqyF = 0;
                            yXlgbaIz++;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (iSgcTnVlqyF == 1) {
                        {
                            yXlgbaIz = 0;
                            while (yXlgbaIz <= CDzLvxRnU) {
                                cout << eYwFDWbx[skuxeV5HhCs + yXlgbaIz];
                                yXlgbaIz++;
                            };
                        }
                        cout << endl;
                    }
                    skuxeV5HhCs++;
                };
            }
            CDzLvxRnU++;
        };
    }
    return 0;
}

