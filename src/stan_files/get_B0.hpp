/*
    fishNflux is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    fishNflux is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with fishNflux.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#include <rstan/rstaninc.hpp>
// Code generated by Stan version 2.19.1

#include <stan/model/model_header.hpp>

namespace model_get_B0_namespace {

using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;

static int current_statement_begin__;

stan::io::program_reader prog_reader__() {
    stan::io::program_reader reader;
    reader.add_event(0, 0, "start", "model_get_B0");
    reader.add_event(45, 43, "end", "model_get_B0");
    return reader;
}

template <typename T0__, typename T1__, typename T2__, typename T3__, class RNG>
typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type
normal_lb_ub_rng(const T0__& mu,
                     const T1__& sigma,
                     const T2__& lb,
                     const T3__& ub, RNG& base_rng__, std::ostream* pstream__) {
    typedef typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type local_scalar_t__;
    typedef local_scalar_t__ fun_return_scalar_t__;
    const static bool propto__ = true;
    (void) propto__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

    int current_statement_begin__ = -1;
    try {
        {
        current_statement_begin__ = 3;
        local_scalar_t__ p1(DUMMY_VAR__);
        (void) p1;  // dummy to suppress unused var warning
        stan::math::initialize(p1, DUMMY_VAR__);
        stan::math::fill(p1, DUMMY_VAR__);
        stan::math::assign(p1,normal_cdf(lb, mu, sigma));

        current_statement_begin__ = 4;
        local_scalar_t__ p2(DUMMY_VAR__);
        (void) p2;  // dummy to suppress unused var warning
        stan::math::initialize(p2, DUMMY_VAR__);
        stan::math::fill(p2, DUMMY_VAR__);
        stan::math::assign(p2,normal_cdf(ub, mu, sigma));

        current_statement_begin__ = 5;
        local_scalar_t__ u(DUMMY_VAR__);
        (void) u;  // dummy to suppress unused var warning
        stan::math::initialize(u, DUMMY_VAR__);
        stan::math::fill(u, DUMMY_VAR__);
        stan::math::assign(u,uniform_rng(p1, p2, base_rng__));


        current_statement_begin__ = 6;
        return stan::math::promote_scalar<fun_return_scalar_t__>(((sigma * inv_Phi(u)) + mu));
        }
    } catch (const std::exception& e) {
        stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
        // Next line prevents compiler griping about no return
        throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
    }
}


struct normal_lb_ub_rng_functor__ {
    template <typename T0__, typename T1__, typename T2__, typename T3__, class RNG>
        typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type
    operator()(const T0__& mu,
                     const T1__& sigma,
                     const T2__& lb,
                     const T3__& ub, RNG& base_rng__, std::ostream* pstream__) const {
        return normal_lb_ub_rng(mu, sigma, lb, ub, base_rng__, pstream__);
    }
};

template <typename T0__, typename T1__, typename T2__, typename T3__, typename T4__, class RNG>
typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__, typename boost::math::tools::promote_args<T4__>::type>::type
get_B0_rng(const T0__& troph_m,
               const T1__& troph_sd,
               const T2__& temp,
               const T3__& b0_m,
               const T4__& b0_sd, RNG& base_rng__, std::ostream* pstream__) {
    typedef typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__, typename boost::math::tools::promote_args<T4__>::type>::type local_scalar_t__;
    typedef local_scalar_t__ fun_return_scalar_t__;
    const static bool propto__ = true;
    (void) propto__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

    int current_statement_begin__ = -1;
    try {
        {
        current_statement_begin__ = 10;
        local_scalar_t__ troph(DUMMY_VAR__);
        (void) troph;  // dummy to suppress unused var warning
        stan::math::initialize(troph, DUMMY_VAR__);
        stan::math::fill(troph, DUMMY_VAR__);
        stan::math::assign(troph,normal_lb_ub_rng(troph_m, troph_sd, 0, 5, base_rng__, pstream__));

        current_statement_begin__ = 11;
        local_scalar_t__ b0(DUMMY_VAR__);
        (void) b0;  // dummy to suppress unused var warning
        stan::math::initialize(b0, DUMMY_VAR__);
        stan::math::fill(b0, DUMMY_VAR__);
        stan::math::assign(b0,normal_lb_ub_rng(b0_m, b0_sd, 0, 1, base_rng__, pstream__));

        current_statement_begin__ = 12;
        local_scalar_t__ Er(DUMMY_VAR__);
        (void) Er;  // dummy to suppress unused var warning
        stan::math::initialize(Er, DUMMY_VAR__);
        stan::math::fill(Er, DUMMY_VAR__);
        stan::math::assign(Er,0.70);

        current_statement_begin__ = 13;
        local_scalar_t__ Ei(DUMMY_VAR__);
        (void) Ei;  // dummy to suppress unused var warning
        stan::math::initialize(Ei, DUMMY_VAR__);
        stan::math::fill(Ei, DUMMY_VAR__);
        stan::math::assign(Ei,2.43);

        current_statement_begin__ = 14;
        local_scalar_t__ tl(DUMMY_VAR__);
        (void) tl;  // dummy to suppress unused var warning
        stan::math::initialize(tl, DUMMY_VAR__);
        stan::math::fill(tl, DUMMY_VAR__);
        stan::math::assign(tl,0.81);

        current_statement_begin__ = 15;
        local_scalar_t__ lnb0tc(DUMMY_VAR__);
        (void) lnb0tc;  // dummy to suppress unused var warning
        stan::math::initialize(lnb0tc, DUMMY_VAR__);
        stan::math::fill(lnb0tc, DUMMY_VAR__);
        stan::math::assign(lnb0tc,stan::math::log(b0));

        current_statement_begin__ = 16;
        local_scalar_t__ k(DUMMY_VAR__);
        (void) k;  // dummy to suppress unused var warning
        stan::math::initialize(k, DUMMY_VAR__);
        stan::math::fill(k, DUMMY_VAR__);
        stan::math::assign(k,(8.62 * pow(10, -(5))));

        current_statement_begin__ = 17;
        local_scalar_t__ Tc(DUMMY_VAR__);
        (void) Tc;  // dummy to suppress unused var warning
        stan::math::initialize(Tc, DUMMY_VAR__);
        stan::math::fill(Tc, DUMMY_VAR__);
        stan::math::assign(Tc,293.15);

        current_statement_begin__ = 18;
        local_scalar_t__ Tk(DUMMY_VAR__);
        (void) Tk;  // dummy to suppress unused var warning
        stan::math::initialize(Tk, DUMMY_VAR__);
        stan::math::fill(Tk, DUMMY_VAR__);
        stan::math::assign(Tk,(temp + 273.15));

        current_statement_begin__ = 19;
        local_scalar_t__ Topt(DUMMY_VAR__);
        (void) Topt;  // dummy to suppress unused var warning
        stan::math::initialize(Topt, DUMMY_VAR__);
        stan::math::fill(Topt, DUMMY_VAR__);
        stan::math::assign(Topt,306.4);

        current_statement_begin__ = 20;
        local_scalar_t__ kt(DUMMY_VAR__);
        (void) kt;  // dummy to suppress unused var warning
        stan::math::initialize(kt, DUMMY_VAR__);
        stan::math::fill(kt, DUMMY_VAR__);
        stan::math::assign(kt,((1 / (k * Tc)) - (1 / (k * Tk))));

        current_statement_begin__ = 21;
        local_scalar_t__ ktop(DUMMY_VAR__);
        (void) ktop;  // dummy to suppress unused var warning
        stan::math::initialize(ktop, DUMMY_VAR__);
        stan::math::fill(ktop, DUMMY_VAR__);
        stan::math::assign(ktop,((1 / (k * Topt)) - (1 / (k * Tk))));

        current_statement_begin__ = 22;
        local_scalar_t__ lnB0(DUMMY_VAR__);
        (void) lnB0;  // dummy to suppress unused var warning
        stan::math::initialize(lnB0, DUMMY_VAR__);
        stan::math::fill(lnB0, DUMMY_VAR__);
        stan::math::assign(lnB0,(((lnb0tc + (tl * stan::math::log(troph))) + (Er * kt)) - stan::math::log((1 + ((Er / (Ei - Er)) * stan::math::exp((Ei * ktop)))))));

        current_statement_begin__ = 23;
        local_scalar_t__ B0(DUMMY_VAR__);
        (void) B0;  // dummy to suppress unused var warning
        stan::math::initialize(B0, DUMMY_VAR__);
        stan::math::fill(B0, DUMMY_VAR__);
        stan::math::assign(B0,stan::math::exp(lnB0));


        current_statement_begin__ = 24;
        return stan::math::promote_scalar<fun_return_scalar_t__>(B0);
        }
    } catch (const std::exception& e) {
        stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
        // Next line prevents compiler griping about no return
        throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
    }
}


struct get_B0_rng_functor__ {
    template <typename T0__, typename T1__, typename T2__, typename T3__, typename T4__, class RNG>
        typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__, typename boost::math::tools::promote_args<T4__>::type>::type
    operator()(const T0__& troph_m,
               const T1__& troph_sd,
               const T2__& temp,
               const T3__& b0_m,
               const T4__& b0_sd, RNG& base_rng__, std::ostream* pstream__) const {
        return get_B0_rng(troph_m, troph_sd, temp, b0_m, b0_sd, base_rng__, pstream__);
    }
};

#include <meta_header.hpp>
 class model_get_B0 : public prob_grad {
private:
        double troph_m;
        double troph_sd;
        double temp;
        double b0_m;
        double b0_sd;
public:
    model_get_B0(stan::io::var_context& context__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, 0, pstream__);
    }

    model_get_B0(stan::io::var_context& context__,
        unsigned int random_seed__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, random_seed__, pstream__);
    }

    void ctor_body(stan::io::var_context& context__,
                   unsigned int random_seed__,
                   std::ostream* pstream__) {
        typedef double local_scalar_t__;

        boost::ecuyer1988 base_rng__ =
          stan::services::util::create_rng(random_seed__, 0);
        (void) base_rng__;  // suppress unused var warning

        current_statement_begin__ = -1;

        static const char* function__ = "model_get_B0_namespace::model_get_B0";
        (void) function__;  // dummy to suppress unused var warning
        size_t pos__;
        (void) pos__;  // dummy to suppress unused var warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        try {
            // initialize data block variables from context__
            current_statement_begin__ = 29;
            context__.validate_dims("data initialization", "troph_m", "double", context__.to_vec());
            troph_m = double(0);
            vals_r__ = context__.vals_r("troph_m");
            pos__ = 0;
            troph_m = vals_r__[pos__++];

            current_statement_begin__ = 30;
            context__.validate_dims("data initialization", "troph_sd", "double", context__.to_vec());
            troph_sd = double(0);
            vals_r__ = context__.vals_r("troph_sd");
            pos__ = 0;
            troph_sd = vals_r__[pos__++];

            current_statement_begin__ = 31;
            context__.validate_dims("data initialization", "temp", "double", context__.to_vec());
            temp = double(0);
            vals_r__ = context__.vals_r("temp");
            pos__ = 0;
            temp = vals_r__[pos__++];

            current_statement_begin__ = 32;
            context__.validate_dims("data initialization", "b0_m", "double", context__.to_vec());
            b0_m = double(0);
            vals_r__ = context__.vals_r("b0_m");
            pos__ = 0;
            b0_m = vals_r__[pos__++];

            current_statement_begin__ = 33;
            context__.validate_dims("data initialization", "b0_sd", "double", context__.to_vec());
            b0_sd = double(0);
            vals_r__ = context__.vals_r("b0_sd");
            pos__ = 0;
            b0_sd = vals_r__[pos__++];


            // initialize transformed data variables
            // execute transformed data statements

            // validate transformed data

            // validate, set parameter ranges
            num_params_r__ = 0U;
            param_ranges_i__.clear();
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    ~model_get_B0() { }


    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        typedef double local_scalar_t__;
        stan::io::writer<double> writer__(params_r__, params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;

        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }

    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }


    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(std::vector<T__>& params_r__,
                 std::vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {

        typedef T__ local_scalar_t__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // dummy to suppress unused var warning

        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;
        try {
            stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);

            // model parameters
            // model body


        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        lp_accum__.add(lp__);
        return lp_accum__.sum();

    } // log_prob()

    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }


    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("B0");
    }


    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dimss__.push_back(dims__);
    }

    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        typedef double local_scalar_t__;

        vars__.resize(0);
        stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
        static const char* function__ = "model_get_B0_namespace::write_array";
        (void) function__;  // dummy to suppress unused var warning

        // read-transform, write parameters
        double lp__ = 0.0;
        (void) lp__;  // dummy to suppress unused var warning
        stan::math::accumulator<double> lp_accum__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        if (!include_tparams__ && !include_gqs__) return;

        try {
            if (!include_gqs__ && !include_tparams__) return;
            if (!include_gqs__) return;
            // declare and define generated quantities
            current_statement_begin__ = 39;
            double B0;
            (void) B0;  // dummy to suppress unused var warning
            stan::math::initialize(B0, DUMMY_VAR__);
            stan::math::fill(B0, DUMMY_VAR__);

            // generated quantities statements
            current_statement_begin__ = 40;
            stan::math::assign(B0, get_B0_rng(troph_m, troph_sd, temp, b0_m, b0_sd, base_rng__, pstream__));

            // validate, write generated quantities
            current_statement_begin__ = 39;
            vars__.push_back(B0);

        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng, params_r_vec, params_i_vec, vars_vec, include_tparams, include_gqs, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }

    static std::string model_name() {
        return "model_get_B0";
    }


    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
        }

        if (!include_gqs__) return;
        param_name_stream__.str(std::string());
        param_name_stream__ << "B0";
        param_names__.push_back(param_name_stream__.str());
    }


    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
        }

        if (!include_gqs__) return;
        param_name_stream__.str(std::string());
        param_name_stream__ << "B0";
        param_names__.push_back(param_name_stream__.str());
    }

}; // model

}  // namespace

typedef model_get_B0_namespace::model_get_B0 stan_model;


#endif
