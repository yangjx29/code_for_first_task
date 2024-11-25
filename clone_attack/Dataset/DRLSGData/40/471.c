double  cAJuoi3 (float TtlDXZMJAj, float tk31BvIMl, float dSDBq7u, float hUJnVy, float azGb6tu9) {
    double  IfnYRzkS;
    double  kQAE4eZu30;
    double  PyUIv87SF;
    PyUIv87SF = (double ) 3.1415926 * azGb6tu9 / 360;
    kQAE4eZu30 = (TtlDXZMJAj +tk31BvIMl + dSDBq7u + hUJnVy) / (676 - 674);
    if ((788 - 788) > ((kQAE4eZu30 - TtlDXZMJAj) * (kQAE4eZu30 - tk31BvIMl) * (kQAE4eZu30 - dSDBq7u) * (kQAE4eZu30 - hUJnVy) - TtlDXZMJAj *tk31BvIMl * dSDBq7u * hUJnVy * cos (PyUIv87SF) * cos (PyUIv87SF))) {
        IfnYRzkS = -1;
    }
    else {
        IfnYRzkS = sqrt ((kQAE4eZu30 - TtlDXZMJAj) * (kQAE4eZu30 - tk31BvIMl) * (kQAE4eZu30 - dSDBq7u) * (kQAE4eZu30 - hUJnVy) - TtlDXZMJAj *tk31BvIMl * dSDBq7u * hUJnVy * cos (PyUIv87SF) * cos (PyUIv87SF));
    }
    return (IfnYRzkS);
}

void  main () {
    double  rov5Gx;
    float TtlDXZMJAj;
    float tk31BvIMl;
    float dSDBq7u;
    float hUJnVy;
    float azGb6tu9;
    scanf ("%f%f%f%f%f", &TtlDXZMJAj, &tk31BvIMl, &dSDBq7u, &hUJnVy, &azGb6tu9);
    rov5Gx = cAJuoi3 (TtlDXZMJAj, tk31BvIMl, dSDBq7u, hUJnVy, azGb6tu9);
    if (rov5Gx < 0) {
    }
    else {
        printf ("%.4f", rov5Gx);
    }
}

