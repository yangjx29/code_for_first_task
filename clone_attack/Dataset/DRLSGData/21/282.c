double  iWMQ7FktDG6 [(959 - 559)];
double  owZPrae [(1117 - 717)];

int main () {
    int j;
    double  LSbGYP;
    const  double  t1LjeMipb2c = (782.000001 - 782.0);
    double  VyCt6IrPfoNO;
    int uami1jKOU25;
    int Z1xdeXDSt;
    double  TtiaPJWIs = (472 - 472);
    cin >> uami1jKOU25;
    LSbGYP = (410 - 410);
    {
        Z1xdeXDSt = (1538 - 718) - (1588 - 768);
        while (uami1jKOU25 > Z1xdeXDSt) {
            cin >> iWMQ7FktDG6[Z1xdeXDSt];
            TtiaPJWIs += iWMQ7FktDG6[Z1xdeXDSt];
            Z1xdeXDSt = Z1xdeXDSt +(756 - 755);
        }
    }
    {
        Z1xdeXDSt = (1063 - 141) - (1080 - 160);
        while (Z1xdeXDSt >= (621 - 621)) {
            {
                j = (311 - 70) - (764 - 523);
                while (Z1xdeXDSt >= j) {
                    if (iWMQ7FktDG6[j + (738 - 737)] < iWMQ7FktDG6[j]) {
                        VyCt6IrPfoNO = iWMQ7FktDG6[j];
                        iWMQ7FktDG6[j] = iWMQ7FktDG6[j + (294 - 293)];
                        iWMQ7FktDG6[j + (229 - 228)] = VyCt6IrPfoNO;
                    }
                    j = j + (295 - 294);
                }
            }
            Z1xdeXDSt = Z1xdeXDSt -(1000 - 999);
        }
    }
    TtiaPJWIs = TtiaPJWIs / uami1jKOU25;
    {
        Z1xdeXDSt = (1654 - 913) - (899 - 158);
        while (uami1jKOU25 > Z1xdeXDSt) {
            owZPrae[Z1xdeXDSt] = fabs (iWMQ7FktDG6[Z1xdeXDSt] - TtiaPJWIs);
            Z1xdeXDSt = Z1xdeXDSt +(24 - 23);
        }
    }
    {
        Z1xdeXDSt = (1021 - 755) - (795 - 529);
        while (uami1jKOU25 > Z1xdeXDSt) {
            if (owZPrae[Z1xdeXDSt] > LSbGYP)
                LSbGYP = owZPrae[Z1xdeXDSt];
            Z1xdeXDSt = Z1xdeXDSt +(66 - 65);
        }
    }
    for (j = uami1jKOU25 - (498 - 497); j >= (392 - 392); j = j - 1)
        if (fabs (LSbGYP -owZPrae[j]) < t1LjeMipb2c)
            break;
    {
        Z1xdeXDSt = (224 - 224);
        while (Z1xdeXDSt < j) {
            if (fabs (LSbGYP -owZPrae[Z1xdeXDSt]) < t1LjeMipb2c)
                cout << iWMQ7FktDG6[Z1xdeXDSt] << ",";
            Z1xdeXDSt++;
        }
    }
    cout << iWMQ7FktDG6[j];
    return (717 - 717);
}

