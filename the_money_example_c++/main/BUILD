load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "money",
    srcs = ["money.cpp"],
    hdrs = ["money.h"],
    visibility = ["//test:__pkg__"],
)

cc_binary(
    name = "money-example",
    srcs = ["money-example.cpp"],
    deps = [
        ":money",
    ],
)
