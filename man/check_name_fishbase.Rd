% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/check_name_fishbase.R
\name{check_name_fishbase}
\alias{check_name_fishbase}
\title{Returns error if name is incorrect}
\usage{
check_name_fishbase(sp)
}
\arguments{
\item{sp}{A character value containing the species name}
}
\description{
This is a wrapper function to which will return an error (via
\code{\link[fishflux]{name_errors}}) if the provided species name is wrong.
}
\examples{
library(fishflux)
check_name_fishbase("Lutjanus griseus")

}
\keyword{fish,}
\keyword{fishbase}
\keyword{taxonomy,}
