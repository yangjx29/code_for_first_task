int cKSqbkp (int tzr1GL, int s3hTqDen) {
    int Z0jTFv;
    {
        {
            if ((702 - 702)) {
                return (85 - 85);
            }
        }
        Z0jTFv = (285 - 285);
        for (; Z0jTFv <= (640 - 630);) {
            if (pow ((997 - 995), Z0jTFv) <= tzr1GL && tzr1GL < pow ((119 - 117), Z0jTFv +(828 - 827)) && pow ((567 - 565), Z0jTFv) <= s3hTqDen && s3hTqDen < pow ((916 - 914), Z0jTFv +(84 - 83)))
                return tzr1GL;
            else
                continue;
            Z0jTFv = Z0jTFv +(172 - 171);
        }
    }
    tzr1GL = tzr1GL / (406 - 404);
    return cKSqbkp (tzr1GL, s3hTqDen);
}

int cRq4XI (int tzr1GL, int s3hTqDen) {
    if (tzr1GL == s3hTqDen)
        return tzr1GL;
    else {
        tzr1GL = tzr1GL / (214 - 212);
        s3hTqDen = s3hTqDen / (289 - 287);
        return cRq4XI (tzr1GL, s3hTqDen);
    }
}

int main () {
    int NmX0BWt;
    int s3hTqDen;
    int tzr1GL;
    cin >> tzr1GL >> s3hTqDen;
    if (tzr1GL < s3hTqDen) {
        NmX0BWt = tzr1GL;
        tzr1GL = s3hTqDen;
        s3hTqDen = NmX0BWt;
    }
    tzr1GL = cKSqbkp (tzr1GL, s3hTqDen);
    cout << cRq4XI (tzr1GL, s3hTqDen);
    return (467 - 467);
}

