# example
ar <- fishflux::aspect_ratio("Zebrasoma scopas")

test_that("Simple corner cases", {
  expect_error(fishflux::aspect_ratio("wrong name"))
  expect_s3_class(ar, "data.frame")
  expect_equal(ar, fishflux::aspect_ratio("Zebrasoma scopas"))
  expect_length(ar, 3)
  expect_equal(as.character(ar[1, 1]), "Zebrasoma scopas")
  expect_true(is.factor(ar[1, 3]))
  expect_gt(ar[1, 2], 0)
})
