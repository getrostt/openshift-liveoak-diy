source $OPENSHIFT_REPO_DIR/liveoak/version
export LIVEOAK_DOWNLOAD_FILE=liveoak-dist-${LIVEOAK_VERSION}.tar.gz
export LIVEOAK_DOWNLOAD_URL="http://repository-projectodd.forge.cloudbees.com/release/io/liveoak/liveoak-dist/${LIVEOAK_VERSION}/${LIVEOAK_DOWNLOAD_FILE}"
export LIVEOAK_BASE=$OPENSHIFT_DEPENDENCIES_DIR/$(basename $LIVEOAK_DOWNLOAD_FILE .tar.gz)
export LIVEOAK_CLEANUP=$(basename $CROWD_BASE $CROWD_VERSION)
