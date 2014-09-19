#!/bin/bash

sed -e "s|~miloc|~|g" $1 > buff;mv buff $1
