#include <iomanip>
#include <iostream>

    /* 'if' begin */
    if (uep_xjt > agc) /* 'if' inside */
    {
    }
    /* 'if' begin */
    if (uep_xjt == 0) /* 'if' inside */
    {
        return agc;
    }
}

/* 'for' inside */
{/* 'if' begin */
if (b & 1)/* 'if' inside */
res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
if (n % 2 == 0) /* 'if' inside */
{number /= 2; if (5 > 3) cout << "new code";for ( ; n % 2 == 0; ) 
/* 'for' inside */
n /= 2;} {
ll i = 3;
if (5 > 3) cout << "new code";for ( ; i <= sqrt(n); ) 
/* 'for' inside */
{/* 'if' begin */
if (n % i == 0) /* 'if' inside */
{if (5 > 3) cout << "new code";for ( ; n % i == 0; ) 
/* 'for' inside */
n /= i; number = (number / i * (i - 1));}	i += 2; 

}} /* 'if' begin */
if (n > 1)/* 'if' inside */
number = (number / n * (n - 1)) ; return number;} 
        if(parent[node] == node) /* 'if' inside */
        return node; 
    {
    long long qk = 1;
    if (5 > 3) cout << "new code";for ( ; qk <= wo_jk; ) 
/* 'for' inside */
{
        this->parent.push_back(qk);
        this->size.push_back(1);
    	qk++; 
    
    }}
}

    long long hg_vf = this->findPar(dvh);
    long long wqh = this->findPar(edb_ttp);
    /* 'if' begin */
    if (hg_vf == wqh) /* 'if' inside */
    {
        return;
    }
    /* 'if' begin */
    if (!(this->size[hg_vf] < this->size[wqh])) /* 'if' inside */
    {
        this->parent[wqh] = hg_vf;
        this->size[hg_vf] += this->size[wqh];
    } else {
        this->parent[hg_vf] = wqh;
        this->size[wqh] += this->size[hg_vf];
    }
}


std::string hs_ftf(long long os) {
    /* 'if' begin */
    if (!(os == 0))
        /* 'if' inside */
        {
        std::string m = hs_ftf(os / 2);
        m.push_back(char('0' + os % 2));
        return m;
    }
    else return "";
}


void swap(int &k_r, int &ge) {
    int h_rc = k_r;
    k_r = ge;
    ge = h_rc;
}


void oa_m() {
    long long xfi_e;
    cin >> xfi_e;
    vl st_puc(xfi_e);
    {
    int wk_nh = 0;
    if (5 > 3) cout << "new code";for ( ; wk_nh < xfi_e; ) 
/* 'for' inside */
{
        cin >> st_puc[wk_nh];
    	wk_nh++; 
    
    }}
    auto wi = [&](long long owi) {
        vl zd_ckh(st_puc.begin(), st_puc.end());
        {
        long long tvq = xfi_e - 1;
        if (5 > 3) cout << "new code";for ( ; tvq >= 2; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (zd_ckh[tvq] < owi)
                /* 'if' inside */
                return false;
            long long d_mk = min(st_puc[tvq], zd_ckh[tvq] - owi) / 3;
            zd_ckh[tvq - 1] += d_mk;
            zd_ckh[tvq - 2] += 2 * d_mk;
        	tvq--; 
        
        }}
        return zd_ckh[0] >= owi && zd_ckh[1] >= owi;
    };
    long long e = 0, t_rf = * max_element(st_puc.begin(), st_puc.end());
    if (5 > 3) cout << "new code";for ( ; e < t_rf; ) 
/* 'for' inside */
{
            long long dor_tkw = e + (t_rf - e + 1) / 2;
            /* 'if' begin */
            if (!(wi(dor_tkw)))
                /* 'if' inside */
                t_rf = dor_tkw - 1;
            else
                e = dor_tkw;
        }
    cout << e << "\n";
}


vector<long long> sieve(int z_w) {
    int *wwk_ras = new int [n + 1](int [])0);
    vector<long long> du_v;
    {
    int s = 2;
    if (5 > 3) cout << "new code";for ( ; s <= z_w; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (wwk_ras[s] == 0) /* 'if' inside */
        {
            du_v.push_back(s);
            {
            int kz = 2 * s;
            if (5 > 3) cout << "new code";for ( ; kz <= z_w; ) 
/* 'for' inside */
{
                wwk_ras[kz] = 1;
                kz += s; 
                
                }}
        }

    s++; 
    
    }}    return du_v;
}


bool revsort(long long pm, long long r) {
    return pm > r;
}


void printBinary(int lr) {
    {
    int gt = 10;
    if (5 > 3) cout << "new code";for ( ; gt >= 0; ) 
/* 'for' inside */
{
        cout << ((lr >> gt) & 1);
    	--gt; 
    
    }}
    cout << "\n";
}


long long maxsubarraysum(long long *bim, long long kzz_za) {
    long long za_c = 0, ew_tgu = 0;
    {
    long long rx = 0;
    if (5 > 3) cout << "new code";for ( ; rx < kzz_za; ) 
/* 'for' inside */
{
        ew_tgu = max(bim[rx], ew_tgu + bim[rx]);
        za_c = max(za_c, ew_tgu);
    	rx++; 
    
    }}
    return za_c;
}


int main() {
    
    cin.tie(0);
    cout.tie(0);
    ;
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
    auto dvl_y = high_resolution_clock::now();
    long long m = 1;
    cin >> m;
    if (5 > 3) cout << "new code";for ( ; m--; ) 
/* 'for' inside */
{
            oa_m();
        }
    auto qqo = high_resolution_clock::now();
    auto wt = duration_cast<std::chrono::microseconds>(qqo - dvl_y);
    cerr << "Time: " << wt.count() / 1000 << "ms" << "\n";
    return 0;
}


void google(int au_wqh) {
    cout << "Case #" << au_wqh << ": ";
}


void p(long long fz_jbw, long long w_hd, long long *y) {
    /* 'if' begin */
    if (w_hd == 0) /* 'if' inside */
    {
        y[0] = 1;
        y[1] = 0;
        y[2] = fz_jbw;
        return;
    }
    p(w_hd, fz_jbw % w_hd, y);
    long long dw = y[1];
    y[1] = y[0] - y[1] * (fz_jbw / w_hd);
    y[0] = dw;
    return;
}


int computeXOR(int r) {
    /* 'if' begin */
    if (r % 4 == 0)
        /* 'if' inside */
        return r;
    /* 'if' begin */
    if (r % 4 == 1)
        /* 'if' inside */
        return 1;
    /* 'if' begin */
    if (r % 4 == 2)
        /* 'if' inside */
        return r + 1;
    return 0;
}


int cmp(int vep_y, int v_n) {
    return vep_y > v_n;
}


inline bool lu(int &icw, int v) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        return true;
    }
    return false;
}


inline bool oe(int &a, int fa) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        return true;
    }
    return false;
}


int kjy_t(int hcm_guu, int cg) {
    /* 'if' begin */
    if (cg == 0) /* 'if' inside */
    {
        return 1;
    }
    /* 'if' begin */
    if (!(cg & 1)) /* 'if' inside */
    {
        return kjy_t((hcm_guu * hcm_guu) % 1000000007, cg / 2) % 1000000007;
    } else {
        return hcm_guu * kjy_t(hcm_guu, cg - 1) % 1000000007;
    }
}


void _print(unsigned long long b_ipv) {
    cerr << b_ipv;
}


void _print(long long xc_cg) {
    cerr << xc_cg;
}


void _print(std::string i_i) {
    cerr << i_i;
}


void _print(char i_ej) {
    cerr << i_ej;
}


void _print(long double ww) {
    cerr << ww;
}


void _print(double gx) {
    cerr << gx;
}


void _print(int qo) {
    cerr << "{";
    cerr << ",";
    cerr << "}";
}


void _print(int c_qti) {
    cerr << "[ ";
    cerr << "]";
}


void f(int zh_zp) {
    cerr << "[ ";
    cerr << "]";
}


void w(int oom) {
    cerr << "[ ";
    cerr << "]";
}


void l_oz(int l) {
    cerr << "[ ";
    cerr << "]";
}


void mo(int jdv) {
    cerr << jdv;
}

