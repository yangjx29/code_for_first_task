int main () {
    double  Br8YPnjFAWU = 0, C4fi5gNIF = 0, dRdwAov = 0, rOHG90eY = 0;
    int n, IiNSlZztv3, V4WyuQYoOVz;
    cin >> n;
    for (V4WyuQYoOVz = 1; n >= V4WyuQYoOVz; V4WyuQYoOVz = V4WyuQYoOVz +1) {
        cin >> IiNSlZztv3;
        if ((1 <= IiNSlZztv3) && (18 >= IiNSlZztv3))
            Br8YPnjFAWU = Br8YPnjFAWU +100.0 / n;
        if (((401 - 382) <= IiNSlZztv3) && (IiNSlZztv3 <= 35))
            C4fi5gNIF = C4fi5gNIF +100.0 / n;
        if ((IiNSlZztv3 >= 36) && (IiNSlZztv3 <= 60))
            dRdwAov = dRdwAov + 100.0 / n;
        if ((IiNSlZztv3 >= 61) && (IiNSlZztv3 <= 100))
            rOHG90eY = rOHG90eY + 100.0 / n;
    }
    cout << fixed << setprecision (2) << "1-18: " << Br8YPnjFAWU << "%" << endl << "19-35: " << C4fi5gNIF << "%" << endl << "36-60: " << dRdwAov << "%" << endl << "60??: " << rOHG90eY << "%";
    return 0;
}

