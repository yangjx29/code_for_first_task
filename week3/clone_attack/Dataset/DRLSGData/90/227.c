int QHB3ue (int V64OGnEyawT, int i1nrKWYof, int CED0eK) {
    int AfTZA1;
    int NJzHd9SrK;
    int KCiGel;
    if (!((756 - 755) != i1nrKWYof) && V64OGnEyawT <= CED0eK)
        return (288 - 287);
    if (!((136 - 135) != i1nrKWYof) && CED0eK < V64OGnEyawT)
        return (973 - 973);
    if (!((475 - 475) != V64OGnEyawT))
        return (344 - 343);
    if (!((521 - 521) != V64OGnEyawT % i1nrKWYof))
        KCiGel = V64OGnEyawT / i1nrKWYof;
    else
        KCiGel = V64OGnEyawT / i1nrKWYof + (194 - 193);
    if (CED0eK > V64OGnEyawT)
        CED0eK = V64OGnEyawT;
    AfTZA1 = (422 - 422);
    {
        NJzHd9SrK = CED0eK;
        for (; NJzHd9SrK >= KCiGel;) {
            AfTZA1 = AfTZA1 +QHB3ue(V64OGnEyawT -NJzHd9SrK, i1nrKWYof - (670 - 669), NJzHd9SrK);
            NJzHd9SrK = NJzHd9SrK -(631 - 630);
        }
    }
    return AfTZA1;
}

int main () {
    int NJzHd9SrK;
    int i1nrKWYof;
    int V64OGnEyawT;
    int zJwLCVv;
    cin >> zJwLCVv;
    {
        NJzHd9SrK = (792 - 791);
        for (; zJwLCVv >= NJzHd9SrK;) {
            NJzHd9SrK = NJzHd9SrK +(281 - 280);
            cin >> V64OGnEyawT >> i1nrKWYof;
            cout << QHB3ue (V64OGnEyawT, i1nrKWYof, V64OGnEyawT) << endl;
        }
    }
    return (736 - 736);
}

