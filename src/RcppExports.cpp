// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// predict_tree
// Rcpp::List predict_tree(Rcpp::List trees, arma::mat Xnew);
// RcppExport SEXP _XBART_predict_tree(SEXP treesSEXP, SEXP XnewSEXP) {
// BEGIN_RCPP
//     Rcpp::RObject rcpp_result_gen;
//     Rcpp::RNGScope rcpp_rngScope_gen;
//     Rcpp::traits::input_parameter< Rcpp::List >::type trees(treesSEXP);
//     Rcpp::traits::input_parameter< arma::mat >::type Xnew(XnewSEXP);
//     rcpp_result_gen = Rcpp::wrap(predict_tree(trees, Xnew));
//     return rcpp_result_gen;
// END_RCPP
// }

// predict_tree_std
// Rcpp::List predict_tree_std(Rcpp::List trees, Rcpp::NumericMatrix Xnew);
// RcppExport SEXP _XBART_predict_tree_std(SEXP treesSEXP, SEXP XnewSEXP) {
// BEGIN_RCPP
//     Rcpp::RObject rcpp_result_gen;
//     Rcpp::RNGScope rcpp_rngScope_gen;
//     Rcpp::traits::input_parameter< Rcpp::List >::type trees(treesSEXP);
//     Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Xnew(XnewSEXP);
//     rcpp_result_gen = Rcpp::wrap(predict_tree_std(trees, Xnew));
//     return rcpp_result_gen;
// END_RCPP
// }

// sample_int_ccrank
std::vector<double> sample_int_ccrank(int n, int size, std::vector<double> prob);
RcppExport SEXP _XBART_sample_int_ccrank(SEXP nSEXP, SEXP sizeSEXP, SEXP probSEXP)
{
    BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter<int>::type n(nSEXP);
    Rcpp::traits::input_parameter<int>::type size(sizeSEXP);
    Rcpp::traits::input_parameter<std::vector<double>>::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_int_ccrank(n, size, prob));
    return rcpp_result_gen;
    END_RCPP
}

// train_forest_root_std_all
Rcpp::List train_forest_root_std_all(arma::mat y, arma::mat X, arma::mat Xtest, size_t M, size_t L, size_t N_sweeps, arma::mat max_depth, size_t Nmin, size_t Ncutpoints, double alpha, double beta, double tau, size_t burnin, size_t mtry, size_t p_categorical, bool draw_sigma, double kap, double s, bool verbose, bool m_update_sigma, bool draw_mu, bool parallel, bool set_random_seed, size_t random_seed);
RcppExport SEXP _XBART_train_forest_root_std_all(SEXP ySEXP, SEXP XSEXP, SEXP XtestSEXP, SEXP MSEXP, SEXP LSEXP, SEXP N_sweepsSEXP, SEXP max_depthSEXP, SEXP NminSEXP, SEXP NcutpointsSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP tauSEXP, SEXP burninSEXP, SEXP mtrySEXP, SEXP p_categoricalSEXP, SEXP draw_sigmaSEXP, SEXP kapSEXP, SEXP sSEXP, SEXP verboseSEXP, SEXP m_update_sigmaSEXP, SEXP draw_muSEXP, SEXP parallelSEXP, SEXP set_random_seedSEXP, SEXP random_seedSEXP)
{
    BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter<arma::mat>::type y(ySEXP);
    Rcpp::traits::input_parameter<arma::mat>::type X(XSEXP);
    Rcpp::traits::input_parameter<arma::mat>::type Xtest(XtestSEXP);
    Rcpp::traits::input_parameter<size_t>::type M(MSEXP);
    Rcpp::traits::input_parameter<size_t>::type L(LSEXP);
    Rcpp::traits::input_parameter<size_t>::type N_sweeps(N_sweepsSEXP);
    Rcpp::traits::input_parameter<arma::mat>::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter<size_t>::type Nmin(NminSEXP);
    Rcpp::traits::input_parameter<size_t>::type Ncutpoints(NcutpointsSEXP);
    Rcpp::traits::input_parameter<double>::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter<double>::type beta(betaSEXP);
    Rcpp::traits::input_parameter<double>::type tau(tauSEXP);
    Rcpp::traits::input_parameter<size_t>::type burnin(burninSEXP);
    Rcpp::traits::input_parameter<size_t>::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter<size_t>::type p_categorical(p_categoricalSEXP);
    Rcpp::traits::input_parameter<bool>::type draw_sigma(draw_sigmaSEXP);
    Rcpp::traits::input_parameter<double>::type kap(kapSEXP);
    Rcpp::traits::input_parameter<double>::type s(sSEXP);
    Rcpp::traits::input_parameter<bool>::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter<bool>::type m_update_sigma(m_update_sigmaSEXP);
    Rcpp::traits::input_parameter<bool>::type draw_mu(draw_muSEXP);
    Rcpp::traits::input_parameter<bool>::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter<bool>::type set_random_seed(set_random_seedSEXP);
    Rcpp::traits::input_parameter<size_t>::type random_seed(random_seedSEXP);
    rcpp_result_gen = Rcpp::wrap(train_forest_root_std_all(y, X, Xtest, M, L, N_sweeps, max_depth, Nmin, Ncutpoints, alpha, beta, tau, burnin, mtry, p_categorical, draw_sigma, kap, s, verbose, m_update_sigma, draw_mu, parallel, set_random_seed, random_seed));
    return rcpp_result_gen;
    END_RCPP
}
Rcpp::List XBART(arma::mat y, arma::mat X, arma::mat Xtest, size_t M, size_t L, size_t N_sweeps, arma::mat max_depth, size_t Nmin, size_t Ncutpoints, double alpha, double beta, double tau, size_t burnin, size_t mtry, size_t p_categorical, bool draw_sigma, double kap, double s, bool verbose, bool m_update_sigma, bool draw_mu, bool parallel, bool set_random_seed, size_t random_seed);
RcppExport SEXP _XBART(SEXP ySEXP, SEXP XSEXP, SEXP XtestSEXP, SEXP MSEXP, SEXP LSEXP, SEXP N_sweepsSEXP, SEXP max_depthSEXP, SEXP NminSEXP, SEXP NcutpointsSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP tauSEXP, SEXP burninSEXP, SEXP mtrySEXP, SEXP p_categoricalSEXP, SEXP draw_sigmaSEXP, SEXP kapSEXP, SEXP sSEXP, SEXP verboseSEXP, SEXP m_update_sigmaSEXP, SEXP draw_muSEXP, SEXP parallelSEXP, SEXP set_random_seedSEXP, SEXP random_seedSEXP)
{
    BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter<arma::mat>::type y(ySEXP);
    Rcpp::traits::input_parameter<arma::mat>::type X(XSEXP);
    Rcpp::traits::input_parameter<arma::mat>::type Xtest(XtestSEXP);
    Rcpp::traits::input_parameter<size_t>::type M(MSEXP);
    Rcpp::traits::input_parameter<size_t>::type L(LSEXP);
    Rcpp::traits::input_parameter<size_t>::type N_sweeps(N_sweepsSEXP);
    Rcpp::traits::input_parameter<arma::mat>::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter<size_t>::type Nmin(NminSEXP);
    Rcpp::traits::input_parameter<size_t>::type Ncutpoints(NcutpointsSEXP);
    Rcpp::traits::input_parameter<double>::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter<double>::type beta(betaSEXP);
    Rcpp::traits::input_parameter<double>::type tau(tauSEXP);
    Rcpp::traits::input_parameter<size_t>::type burnin(burninSEXP);
    Rcpp::traits::input_parameter<size_t>::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter<size_t>::type p_categorical(p_categoricalSEXP);
    Rcpp::traits::input_parameter<bool>::type draw_sigma(draw_sigmaSEXP);
    Rcpp::traits::input_parameter<double>::type kap(kapSEXP);
    Rcpp::traits::input_parameter<double>::type s(sSEXP);
    Rcpp::traits::input_parameter<bool>::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter<bool>::type m_update_sigma(m_update_sigmaSEXP);
    Rcpp::traits::input_parameter<bool>::type draw_mu(draw_muSEXP);
    Rcpp::traits::input_parameter<bool>::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter<bool>::type set_random_seed(set_random_seedSEXP);
    Rcpp::traits::input_parameter<size_t>::type random_seed(random_seedSEXP);
    rcpp_result_gen = Rcpp::wrap(XBART(y, X, Xtest, M, L, N_sweeps, max_depth, Nmin, Ncutpoints, alpha, beta, tau, burnin, mtry, p_categorical, draw_sigma, kap, s, verbose, m_update_sigma, draw_mu, parallel, set_random_seed, random_seed));
    return rcpp_result_gen;
    END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_XBART_sample_int_ccrank", (DL_FUNC)&_XBART_sample_int_ccrank, 3},
    {"_XBART_train_forest_root_std_all", (DL_FUNC)&_XBART_train_forest_root_std_all, 24},
    {"_XBART", (DL_FUNC)&_XBART, 24},
    {NULL, NULL, 0}};

RcppExport void R_init_XBART(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}