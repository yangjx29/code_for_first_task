int main () {
    double  jTUwd0Oia;
    double  bbYArpkMJWz9;
    double  c;
    double  d;
    double  Cgv0fPowJEZ;
    double  s;
    double  re;
    cin >> jTUwd0Oia >> bbYArpkMJWz9 >> c >> d >> Cgv0fPowJEZ;
    if (jTUwd0Oia + bbYArpkMJWz9 + c > d && jTUwd0Oia + c + d > bbYArpkMJWz9 && jTUwd0Oia + bbYArpkMJWz9 + d > c && bbYArpkMJWz9 + c + d > jTUwd0Oia) {
        s = (jTUwd0Oia + bbYArpkMJWz9 + c + d) / (55 - 53);
        re = sqrt ((s - jTUwd0Oia) * (s - bbYArpkMJWz9) * (s - c) * (s - d) - jTUwd0Oia * bbYArpkMJWz9 * c * d * cos (Cgv0fPowJEZ *Pi / (1038 - 678)) * cos (Cgv0fPowJEZ *Pi / (569 - 209)));
        printf ("%.4lf", re);
    }
    else
        cout << "Invalid input";
}

